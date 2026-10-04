library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity logic_unit_tb is
end logic_unit_tb;

architecture Behavioral of logic_unit_tb is

    component logic_unit
        Port(
            A : in STD_LOGIC_VECTOR(7 downto 0);
            B : in STD_LOGIC_VECTOR(7 downto 0);
            SEL : in STD_LOGIC_VECTOR(2 downto 0);
            RESULT : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal A : STD_LOGIC_VECTOR(7 downto 0);
    signal B : STD_LOGIC_VECTOR(7 downto 0);
    signal SEL : STD_LOGIC_VECTOR(2 downto 0);
    signal RESULT : STD_LOGIC_VECTOR(7 downto 0);

begin

    UUT: logic_unit
        port map(
            A => A,
            B => B,
            SEL => SEL,
            RESULT => RESULT
        );

    process
    begin

        A <= "10101010";
        B <= "11001100";

        -- AND
        SEL <= "000";
        wait for 20 ns;

        -- OR
        SEL <= "001";
        wait for 20 ns;

        -- XOR
        SEL <= "010";
        wait for 20 ns;

        -- NOT A
        SEL <= "011";
        wait for 20 ns;

        -- NAND
        SEL <= "100";
        wait for 20 ns;

        -- NOR
        SEL <= "101";
        wait for 20 ns;

        -- XNOR
        SEL <= "110";
        wait for 20 ns;

        -- PASS A
        SEL <= "111";
        wait for 20 ns;

        wait;
    end process;

end Behavioral;