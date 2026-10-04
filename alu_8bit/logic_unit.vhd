library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity logic_unit is
    Port (
        A : in STD_LOGIC_VECTOR(7 downto 0);
        B : in STD_LOGIC_VECTOR(7 downto 0);
        SEL : in STD_LOGIC_VECTOR(2 downto 0);
        RESULT : out STD_LOGIC_VECTOR(7 downto 0)
    );
end logic_unit;

architecture Structural of logic_unit is

    component and_gate
        Port(
            A : in STD_LOGIC;
            B : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component or_gate
        Port(
            A : in STD_LOGIC;
            B : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component xor_gate
        Port(
            A : in STD_LOGIC;
            B : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component not_gate
        Port(
            A : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component nand_gate
        Port(
            A : in STD_LOGIC;
            B : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

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

    signal and_r  : STD_LOGIC_VECTOR(7 downto 0);
    signal or_r   : STD_LOGIC_VECTOR(7 downto 0);
    signal xor_r  : STD_LOGIC_VECTOR(7 downto 0);
    signal not_r  : STD_LOGIC_VECTOR(7 downto 0);
    signal nand_r : STD_LOGIC_VECTOR(7 downto 0);
    signal nor_r  : STD_LOGIC_VECTOR(7 downto 0);
    signal xnor_r : STD_LOGIC_VECTOR(7 downto 0);

    signal mux_result : STD_LOGIC_VECTOR(7 downto 0);

begin

    GEN_LOGIC: for i in 0 to 7 generate

        U_AND: and_gate
            port map(A(i), B(i), and_r(i));

        U_OR: or_gate
            port map(A(i), B(i), or_r(i));

        U_XOR: xor_gate
            port map(A(i), B(i), xor_r(i));

        U_NOT: not_gate
            port map(A(i), not_r(i));

        U_NAND: nand_gate
            port map(A(i), B(i), nand_r(i));

        U_NOR: not_gate
            port map(or_r(i), nor_r(i));

        U_XNOR: not_gate
            port map(xor_r(i), xnor_r(i));

        U_MUX: mux_8to1
            port map(
                A => and_r(i),
                B => or_r(i),
                C => xor_r(i),
                D => not_r(i),
                E => nand_r(i),
                F => nor_r(i),
                G => xnor_r(i),
                H => A(i),
                S0 => SEL(0),
                S1 => SEL(1),
                S2 => SEL(2),
                Y => mux_result(i)
            );

    end generate;

    RESULT <= mux_result;

end Structural;