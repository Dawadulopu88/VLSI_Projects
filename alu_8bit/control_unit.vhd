library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity control_unit is
    Port(
        OP : in STD_LOGIC_VECTOR(3 downto 0);

        ARITH_EN : out STD_LOGIC;
        LOGIC_EN : out STD_LOGIC;
        SHIFT_EN : out STD_LOGIC;

        ARITH_OP : out STD_LOGIC_VECTOR(1 downto 0);
        LOGIC_SEL : out STD_LOGIC_VECTOR(2 downto 0);
        SHIFT_SEL : out STD_LOGIC_VECTOR(1 downto 0);

        CMP_EN : out STD_LOGIC
    );
end control_unit;

architecture Behavioral of control_unit is

begin

    process(OP)
    begin

        ARITH_EN <= '0';
        LOGIC_EN <= '0';
        SHIFT_EN <= '0';
        CMP_EN <= '0';

        ARITH_OP <= "00";
        LOGIC_SEL <= "000";
        SHIFT_SEL <= "00";

        case OP is

            -- ADD
            when "0000" =>
                ARITH_EN <= '1';
                ARITH_OP <= "00";

            -- SUB
            when "0001" =>
                ARITH_EN <= '1';
                ARITH_OP <= "01";

            -- INC
            when "0010" =>
                ARITH_EN <= '1';
                ARITH_OP <= "10";

            -- DEC
            when "0011" =>
                ARITH_EN <= '1';
                ARITH_OP <= "11";

            -- AND
            when "0100" =>
                LOGIC_EN <= '1';
                LOGIC_SEL <= "000";

            -- OR
            when "0101" =>
                LOGIC_EN <= '1';
                LOGIC_SEL <= "001";

            -- XOR
            when "0110" =>
                LOGIC_EN <= '1';
                LOGIC_SEL <= "010";

            -- NOT A
            when "0111" =>
                LOGIC_EN <= '1';
                LOGIC_SEL <= "011";

            -- NAND
            when "1000" =>
                LOGIC_EN <= '1';
                LOGIC_SEL <= "100";

            -- NOR
            when "1001" =>
                LOGIC_EN <= '1';
                LOGIC_SEL <= "101";

            -- XNOR
            when "1010" =>
                LOGIC_EN <= '1';
                LOGIC_SEL <= "110";

            -- PASS A
            when "1011" =>
                LOGIC_EN <= '1';
                LOGIC_SEL <= "111";

            -- SHL
            when "1100" =>
                SHIFT_EN <= '1';
                SHIFT_SEL <= "00";

            -- SHR
            when "1101" =>
                SHIFT_EN <= '1';
                SHIFT_SEL <= "01";

            -- ASR
            when "1110" =>
                SHIFT_EN <= '1';
                SHIFT_SEL <= "10";

            -- CMP
            when "1111" =>
                ARITH_EN <= '1';
                ARITH_OP <= "01";
                CMP_EN <= '1';

            when others =>
                null;

        end case;

    end process;

end Behavioral;