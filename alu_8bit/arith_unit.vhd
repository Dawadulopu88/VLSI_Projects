library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity arith_unit is
    Port(
        A : in STD_LOGIC_VECTOR(7 downto 0);
        B : in STD_LOGIC_VECTOR(7 downto 0);
        OP : in STD_LOGIC_VECTOR(1 downto 0);

        RESULT : out STD_LOGIC_VECTOR(7 downto 0);
        COUT : out STD_LOGIC;
        B_USED : out STD_LOGIC_VECTOR(7 downto 0)
    );
end arith_unit;

architecture Structural of arith_unit is

    component adder_8bit
        Port(
            A : in STD_LOGIC_VECTOR(7 downto 0);
            B : in STD_LOGIC_VECTOR(7 downto 0);
            CIN : in STD_LOGIC;
            SUM : out STD_LOGIC_VECTOR(7 downto 0);
            COUT : out STD_LOGIC
        );
    end component;

    component not_gate
        Port(
            A : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    signal B_NOT : STD_LOGIC_VECTOR(7 downto 0);
    signal B_SEL : STD_LOGIC_VECTOR(7 downto 0);
    signal CIN_SEL : STD_LOGIC;

    signal SUM : STD_LOGIC_VECTOR(7 downto 0);
    signal CARRY : STD_LOGIC;

begin

    -- NOT B
    GEN_NOT: for i in 0 to 7 generate
        U_NOT: not_gate
            port map(
                A => B(i),
                Y => B_NOT(i)
            );
    end generate;

    process(A, B, B_NOT, OP)
    begin

        case OP is

            -- ADD
            when "00" =>
                B_SEL <= B;
                CIN_SEL <= '0';

            -- SUB
            when "01" =>
                B_SEL <= B_NOT;
                CIN_SEL <= '1';

            -- INC A
            when "10" =>
                B_SEL <= "00000000";
                CIN_SEL <= '1';

            -- DEC A
            when "11" =>
                B_SEL <= "11111111";
                CIN_SEL <= '0';

            when others =>
                B_SEL <= B;
                CIN_SEL <= '0';

        end case;

    end process;

    ADDER: adder_8bit
        port map(
            A => A,
            B => B_SEL,
            CIN => CIN_SEL,
            SUM => SUM,
            COUT => CARRY
        );

    RESULT <= SUM;
    COUT <= CARRY;
    B_USED <= B_SEL;

end Structural;