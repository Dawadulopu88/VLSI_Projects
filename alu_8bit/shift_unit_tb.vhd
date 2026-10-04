library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity shift_unit_tb is
end shift_unit_tb;

architecture Behavioral of shift_unit_tb is

    component shift_unit
        Port(
            A : in STD_LOGIC_VECTOR(7 downto 0);
            SEL : in STD_LOGIC_VECTOR(1 downto 0);
            RESULT : out STD_LOGIC_VECTOR(7 downto 0)
        );
    end component;

    signal A : STD_LOGIC_VECTOR(7 downto 0);
    signal SEL : STD_LOGIC_VECTOR(1 downto 0);
    signal RESULT : STD_LOGIC_VECTOR(7 downto 0);

begin

    UUT: shift_unit
        port map(
            A => A,
            SEL => SEL,
            RESULT => RESULT
        );

    process
    begin

        A <= "10010110";

        -- SHL
        SEL <= "00";
        wait for 20 ns;

        -- SHR
        SEL <= "01";
        wait for 20 ns;

        -- ASR
        SEL <= "10";
        wait for 20 ns;

        wait;
    end process;

end Behavioral;