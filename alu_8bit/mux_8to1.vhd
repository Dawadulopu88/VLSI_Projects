library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux_8to1 is
    Port (
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
end mux_8to1;

architecture Structural of mux_8to1 is

    component nand_gate
        Port (
            A : in STD_LOGIC;
            B : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    component not_gate
        Port (
            A : in STD_LOGIC;
            Y : out STD_LOGIC
        );
    end component;

    signal nS0, nS1, nS2 : STD_LOGIC;

    signal x1, x2, x3, x4 : STD_LOGIC;
    signal x5, x6 : STD_LOGIC;

    signal n1, n2, n3, n4 : STD_LOGIC;
    signal n5, n6, n7, n8 : STD_LOGIC;
    signal n9, n10, n11, n12 : STD_LOGIC;
    signal n13, n14, n15, n16 : STD_LOGIC;
    signal n17, n18, n19, n20 : STD_LOGIC;
    signal n21, n22, n23, n24 : STD_LOGIC;
    signal n25, n26, n27, n28 : STD_LOGIC;

begin

    -- NOT select signals
    NS0: not_gate port map(S0, nS0);
    NS1: not_gate port map(S1, nS1);
    NS2: not_gate port map(S2, nS2);

    -- First level
    U1: nand_gate port map(A, nS0, n1);
    U2: nand_gate port map(B, S0, n2);
    U3: nand_gate port map(n1, n2, x1);

    U4: nand_gate port map(C, nS0, n3);
    U5: nand_gate port map(D, S0, n4);
    U6: nand_gate port map(n3, n4, x2);

    U7: nand_gate port map(E, nS0, n5);
    U8: nand_gate port map(F, S0, n6);
    U9: nand_gate port map(n5, n6, x3);

    U10: nand_gate port map(G, nS0, n7);
    U11: nand_gate port map(H, S0, n8);
    U12: nand_gate port map(n7, n8, x4);

    -- Second level
    U13: nand_gate port map(x1, nS1, n9);
    U14: nand_gate port map(x2, S1, n10);
    U15: nand_gate port map(n9, n10, x5);

    U16: nand_gate port map(x3, nS1, n11);
    U17: nand_gate port map(x4, S1, n12);
    U18: nand_gate port map(n11, n12, x6);

    -- Third level
    U19: nand_gate port map(x5, nS2, n13);
    U20: nand_gate port map(x6, S2, n14);
    U21: nand_gate port map(n13, n14, Y);

end Structural;