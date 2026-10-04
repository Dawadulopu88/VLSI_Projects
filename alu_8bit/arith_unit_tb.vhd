library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity arith_unit_tb is
end arith_unit_tb;

architecture Behavioral of arith_unit_tb is

    component arith_unit
        Port(
            A : in STD_LOGIC_VECTOR(7 downto 0);
            B : in STD_LOGIC_VECTOR(7 downto 0);
            OP : in STD_LOGIC_VECTOR(1 downto 0);
            RESULT : out STD_LOGIC_VECTOR(7 downto 0);
            COUT : out STD_LOGIC;
            B_USED : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal A, B : STD_LOGIC_VECTOR(7 downto 0);
    signal OP : STD_LOGIC_VECTOR(1 downto 0);
    signal RESULT : STD_LOGIC_VECTOR(7 downto 0);
    signal COUT : STD_LOGIC;
    signal B_USED : STD_LOGIC_VECTOR(7 downto 0);

begin

    UUT: arith_unit
        port map(
            A => A,
            B => B,
            OP => OP,
            RESULT => RESULT,
            COUT => COUT,
            B_USED => B_USED
        );

    process
    begin

        A <= "00001111";
        B <= "00000011";

        -- ADD
        OP <= "00";
        wait for 20 ns;

        -- SUB
        OP <= "01";
        wait for 20 ns;

        -- INC
        OP <= "10";
        wait for 20 ns;

        -- DEC
        OP <= "11";
        wait for 20 ns;

        wait;
    end process;

end Behavioral;