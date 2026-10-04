library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_adder_4bit is
end tb_adder_4bit;

architecture Behavioral of tb_adder_4bit is

    -- Component declaration
    component adder_4bit
        Port (
            A    : in  STD_LOGIC_VECTOR (3 downto 0);
            B    : in  STD_LOGIC_VECTOR (3 downto 0);
            CIN  : in  STD_LOGIC;
            SUM  : out STD_LOGIC_VECTOR (3 downto 0);
            COUT : out STD_LOGIC
        );
    end component;

    -- Testbench signals
    signal A    : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal B    : STD_LOGIC_VECTOR (3 downto 0) := "0000";
    signal CIN  : STD_LOGIC := '0';
    signal SUM  : STD_LOGIC_VECTOR (3 downto 0);
    signal COUT : STD_LOGIC;

begin

    -- Instantiate the Unit Under Test (UUT)
    UUT: adder_4bit
        port map (
            A    => A,
            B    => B,
            CIN  => CIN,
            SUM  => SUM,
            COUT => COUT
        );

    -- Test process
    stim_proc: process
    begin

        -- Test 1: 3 + 2 = 5
        A <= "0011";
        B <= "0010";
        CIN <= '0';
        wait for 10 ns;

        -- Test 2: 7 + 8 = 15
        A <= "0111";
        B <= "1000";
        CIN <= '0';
        wait for 10 ns;

        -- Test 3: 15 + 1 = 16
        A <= "1111";
        B <= "0001";
        CIN <= '0';
        wait for 10 ns;

        -- Test 4: 5 + 3 + CIN(1) = 9
        A <= "0101";
        B <= "0011";
        CIN <= '1';
        wait for 10 ns;

        -- Test 5: 15 + 15 = 30
        A <= "1111";
        B <= "1111";
        CIN <= '0';
        wait for 10 ns;

        -- Test 6: 8 + 7 + CIN(1) = 16
        A <= "1000";
        B <= "0111";
        CIN <= '1';
        wait for 10 ns;

        -- Stop simulation
        wait;

    end process;

end Behavioral;