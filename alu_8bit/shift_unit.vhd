library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity shift_unit is
    Port(
        A : in STD_LOGIC_VECTOR(7 downto 0);
        SEL : in STD_LOGIC_VECTOR(1 downto 0);
        RESULT : out STD_LOGIC_VECTOR(7 downto 0)
    );
end shift_unit;

architecture Structural of shift_unit is

    component mux_8to1
        Port(
            A : in STD_LOGIC;
            B : in STD_LOGIC;
            C : in STD_LOGIC;
            D : in STD_LOGIC;
            E : in STD_LOGIC;
            F : in STD_LOGIC;
            G : in STD_LOGIC;
            H : in STD_LOGIC;
            S0 : in STD_LOGIC;
            S1 : in STD_LOGIC;
            S2 : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    signal SHL : STD_LOGIC_VECTOR(7 downto 0);
    signal SHR : STD_LOGIC_VECTOR(7 downto 0);
    signal ASR : STD_LOGIC_VECTOR(7 downto 0);

begin

    SHL <= A(6 downto 0) & '0';

    SHR <= '0' & A(7 downto 1);

    ASR <= A(7) & A(7 downto 1);

    GEN_SHIFT: for i in 0 to 7 generate

        U_MUX: mux_8to1
            port map(
                A => SHL(i),
                B => SHR(i),
                C => ASR(i),
                D => '0',
                E => '0',
                F => '0',
                G => '0',
                H => '0',
                S0 => SEL(0),
                S1 => SEL(1),
                S2 => '0',
                Y => RESULT(i)
            );

    end generate;

end Structural;