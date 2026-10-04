library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity flag_unit is
    Port(
        A : in STD_LOGIC_VECTOR(7 downto 0);
        B : in STD_LOGIC_VECTOR(7 downto 0);
        RESULT : in STD_LOGIC_VECTOR(7 downto 0);
        COUT : in STD_LOGIC;

        ARITH_EN : in STD_LOGIC;
        SUB_EN : in STD_LOGIC;

        ZERO : out STD_LOGIC;
        CARRY : out STD_LOGIC;
        NEGATIVE : out STD_LOGIC;
        OVERFLOW : out STD_LOGIC
    );
end flag_unit;

architecture Behavioral of flag_unit is

begin

    process(A, B, RESULT, COUT, ARITH_EN, SUB_EN)
    begin

        -- ZERO
        if RESULT = "00000000" then
            ZERO <= '1';
        else
            ZERO <= '0';
        end if;

        -- NEGATIVE
        NEGATIVE <= RESULT(7);

        -- CARRY / BORROW
        if ARITH_EN = '1' then

            if SUB_EN = '1' then
                CARRY <= not COUT;
            else
                CARRY <= COUT;
            end if;

        else
            CARRY <= '0';
        end if;

        -- OVERFLOW
        OVERFLOW <= '0';

        if ARITH_EN = '1' then

            if SUB_EN = '1' then

                -- A - B
                if (A(7) /= B(7)) and
                   (RESULT(7) /= A(7)) then

                    OVERFLOW <= '1';

                end if;

            else

                -- A + B
                if (A(7) = B(7)) and
                   (RESULT(7) /= A(7)) then

                    OVERFLOW <= '1';

                end if;

            end if;

        end if;

    end process;

end Behavioral;