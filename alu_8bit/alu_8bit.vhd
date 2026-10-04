library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- 8-bit ALU = adder_8bit + sub_8bit + logic_8bit + compare + 8:1 MUX
--
-- op   operation          res
-- 000  ADD                a + b + cin
-- 001  SUB                a - b
-- 010  AND                a and b
-- 011  OR                 a or b
-- 100  XOR                a xor b
-- 101  NOT                not a
-- 110  EQ  (compare)      00000001 if a = b  else 00000000
-- 111  LT  (compare)      00000001 if a < b  else 00000000
--
-- cout : carry-out (ADD), borrow (SUB), 0 otherwise
-- zero : 1 when res = 00000000
entity alu_8bit is
    Port ( a    : in  STD_LOGIC_VECTOR (7 downto 0);
           b    : in  STD_LOGIC_VECTOR (7 downto 0);
           cin  : in  STD_LOGIC;
           op   : in  STD_LOGIC_VECTOR (2 downto 0);
           res  : out STD_LOGIC_VECTOR (7 downto 0);
           cout : out STD_LOGIC;
           zero : out STD_LOGIC);
end alu_8bit;

architecture Structural of alu_8bit is

    component adder_8bit
        Port ( A    : in  STD_LOGIC_VECTOR (7 downto 0);
               B    : in  STD_LOGIC_VECTOR (7 downto 0);
               CIN  : in  STD_LOGIC;
               SUM  : out STD_LOGIC_VECTOR (7 downto 0);
               COUT : out STD_LOGIC);
    end component;

    component sub_8bit
        Port ( A      : in  STD_LOGIC_VECTOR (7 downto 0);
               B      : in  STD_LOGIC_VECTOR (7 downto 0);
               DIFF   : out STD_LOGIC_VECTOR (7 downto 0);
               BORROW : out STD_LOGIC);
    end component;

    component logic_8bit
        Port ( A      : in  STD_LOGIC_VECTOR (7 downto 0);
               B      : in  STD_LOGIC_VECTOR (7 downto 0);
               Y_AND  : out STD_LOGIC_VECTOR (7 downto 0);
               Y_OR   : out STD_LOGIC_VECTOR (7 downto 0);
               Y_XOR  : out STD_LOGIC_VECTOR (7 downto 0);
               Y_NOT  : out STD_LOGIC_VECTOR (7 downto 0);
               Y_NAND : out STD_LOGIC_VECTOR (7 downto 0);
               Y_NOR  : out STD_LOGIC_VECTOR (7 downto 0));
    end component;

    component mux8x1_8bit
        Port ( I0 : in  STD_LOGIC_VECTOR (7 downto 0);
               I1 : in  STD_LOGIC_VECTOR (7 downto 0);
               I2 : in  STD_LOGIC_VECTOR (7 downto 0);
               I3 : in  STD_LOGIC_VECTOR (7 downto 0);
               I4 : in  STD_LOGIC_VECTOR (7 downto 0);
               I5 : in  STD_LOGIC_VECTOR (7 downto 0);
               I6 : in  STD_LOGIC_VECTOR (7 downto 0);
               I7 : in  STD_LOGIC_VECTOR (7 downto 0);
               S  : in  STD_LOGIC_VECTOR (2 downto 0);
               Y  : out STD_LOGIC_VECTOR (7 downto 0));
    end component;

    signal sum_r, diff_r, and_r, or_r, xor_r, not_r : STD_LOGIC_VECTOR (7 downto 0);
    signal eq_r, lt_r, res_i                         : STD_LOGIC_VECTOR (7 downto 0);
    signal add_c, sub_b, cout_i                      : STD_LOGIC;

begin

    U_ADD: adder_8bit port map ( A => a, B => b, CIN => cin, SUM => sum_r, COUT => add_c );

    U_SUB: sub_8bit port map ( A => a, B => b, DIFF => diff_r, BORROW => sub_b );

    U_LOG: logic_8bit port map ( A => a, B => b, Y_AND => and_r, Y_OR => or_r,
                                 Y_XOR => xor_r, Y_NOT => not_r,
                                 Y_NAND => open, Y_NOR => open );

    -- compare results (from the subtractor)
    eq_r <= "0000000" & '1' when diff_r = "00000000" else "00000000";
    lt_r <= "0000000" & sub_b;

    U_MUX: mux8x1_8bit port map ( I0 => sum_r, I1 => diff_r, I2 => and_r, I3 => or_r,
                                  I4 => xor_r, I5 => not_r,  I6 => eq_r,  I7 => lt_r,
                                  S  => op,    Y  => res_i );

    res <= res_i;

    cout_i <= add_c when op = "000" else
              sub_b when op = "001" else
              '0';
    cout <= cout_i;

    zero <= '1' when res_i = "00000000" else '0';

end Structural;