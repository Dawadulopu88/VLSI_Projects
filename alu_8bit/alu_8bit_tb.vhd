library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity alu_8bit_tb is
end alu_8bit_tb;

architecture Behavioral of alu_8bit_tb is

    component alu_8bit
        Port ( a    : in  STD_LOGIC_VECTOR (7 downto 0);
               b    : in  STD_LOGIC_VECTOR (7 downto 0);
               cin  : in  STD_LOGIC;
               op   : in  STD_LOGIC_VECTOR (2 downto 0);
               res  : out STD_LOGIC_VECTOR (7 downto 0);
               cout : out STD_LOGIC;
               zero : out STD_LOGIC);
    end component;

    signal a, b, res : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal op        : STD_LOGIC_VECTOR (2 downto 0) := (others => '0');
    signal cin       : STD_LOGIC := '0';
    signal cout, zero : STD_LOGIC;

    signal errors : integer := 0;

begin

    UUT: alu_8bit port map ( a => a, b => b, cin => cin, op => op,
                             res => res, cout => cout, zero => zero );

    stim_proc: process

        -- apply one test vector for 10 ns, then check against expected values
        procedure test (av, bv : in integer; opv : in integer; civ : in integer) is
            variable ua, ub, ur : unsigned (7 downto 0);
            variable tmp, exp_r, exp_c : integer;
            variable exp_z, exp_cs : STD_LOGIC;
        begin
            ua := to_unsigned(av, 8);
            ub := to_unsigned(bv, 8);
            exp_c := 0;

            case opv is
                when 0 => tmp := av + bv + civ; exp_r := tmp mod 256;
                          if tmp > 255 then exp_c := 1; end if;
                when 1 => exp_r := (av - bv + 256) mod 256;
                          if av < bv then exp_c := 1; end if;
                when 2 => ur := ua and ub; exp_r := to_integer(ur);
                when 3 => ur := ua or ub;  exp_r := to_integer(ur);
                when 4 => ur := ua xor ub; exp_r := to_integer(ur);
                when 5 => ur := not ua;    exp_r := to_integer(ur);
                when 6 => if av = bv then exp_r := 1; else exp_r := 0; end if;
                when others => if av < bv then exp_r := 1; else exp_r := 0; end if;
            end case;

            if exp_r = 0 then exp_z := '1'; else exp_z := '0'; end if;
            if exp_c = 1 then exp_cs := '1'; else exp_cs := '0'; end if;

            a   <= std_logic_vector(ua);
            b   <= std_logic_vector(ub);
            op  <= std_logic_vector(to_unsigned(opv, 3));
            if civ = 1 then cin <= '1'; else cin <= '0'; end if;
            wait for 10 ns;

            if (to_integer(unsigned(res)) /= exp_r) or
               (cout /= exp_cs) or (zero /= exp_z) then
                errors <= errors + 1;
                report "FAIL op=" & integer'image(opv) & " a=" & integer'image(av) &
                       " b=" & integer'image(bv) & " got res=" &
                       integer'image(to_integer(unsigned(res))) &
                       " exp=" & integer'image(exp_r) severity error;
            end if;
        end procedure;

    begin
        wait for 5 ns;

        --      a     b    op  cin
        -- ADD (op = 000)
        test(16#05#, 16#03#, 0, 0);   -- 08
        test(16#0F#, 16#01#, 0, 1);   -- 11  (cin = 1)
        test(16#7F#, 16#01#, 0, 0);   -- 80
        test(16#FF#, 16#01#, 0, 0);   -- 00  cout = 1, zero = 1
        test(16#C8#, 16#64#, 0, 0);   -- 2C  cout = 1
        -- SUB (op = 001)
        test(16#0A#, 16#03#, 1, 0);   -- 07
        test(16#05#, 16#05#, 1, 0);   -- 00  zero = 1
        test(16#03#, 16#05#, 1, 0);   -- FE  cout (borrow) = 1
        test(16#80#, 16#01#, 1, 0);   -- 7F
        -- logic
        test(16#F0#, 16#0F#, 2, 0);   -- AND -> 00
        test(16#F0#, 16#0F#, 3, 0);   -- OR  -> FF
        test(16#AA#, 16#55#, 4, 0);   -- XOR -> FF
        test(16#AA#, 16#55#, 5, 0);   -- NOT A -> 55
        -- compare
        test(16#3C#, 16#3C#, 6, 0);   -- EQ -> 01
        test(16#12#, 16#34#, 7, 0);   -- LT -> 01
        -- final value (as in the waveform): a=AA, b=F0, op=110, res=00, zero=1
        test(16#AA#, 16#F0#, 6, 0);

        wait for 40 ns;

        if errors = 0 then
            report "ALU TEST PASSED: all vectors correct" severity note;
        else
            report "ALU TEST FAILED: " & integer'image(errors) & " errors" severity error;
        end if;
        wait;
    end process;

end Behavioral;