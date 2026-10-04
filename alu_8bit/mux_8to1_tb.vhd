library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity mux_8to1_tb is
end mux_8to1_tb;

architecture Behavioral of mux_8to1_tb is

    component mux_8to1
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
    end component;

    signal A,B,C,D,E,F,G,H : STD_LOGIC;
    signal S0,S1,S2 : STD_LOGIC;
    signal Y : STD_LOGIC;

begin

    UUT: mux_8to1
        port map(
            A => A,
            B => B,
            C => C,
            D => D,
            E => E,
            F => F,
            G => G,
            H => H,
            S0 => S0,
            S1 => S1,
            S2 => S2,
            Y => Y
        );

    process
    begin

        A <= '1';
        B <= '0';
        C <= '1';
        D <= '0';
        E <= '1';
        F <= '0';
        G <= '1';
        H <= '0';

        -- A
        S2 <= '0'; S1 <= '0'; S0 <= '0';
        wait for 10 ns;

        -- B
        S2 <= '0'; S1 <= '0'; S0 <= '1';
        wait for 10 ns;

        -- C
        S2 <= '0'; S1 <= '1'; S0 <= '0';
        wait for 10 ns;

        -- D
        S2 <= '0'; S1 <= '1'; S0 <= '1';
        wait for 10 ns;

        -- E
        S2 <= '1'; S1 <= '0'; S0 <= '0';
        wait for 10 ns;

        -- F
        S2 <= '1'; S1 <= '0'; S0 <= '1';
        wait for 10 ns;

        -- G
        S2 <= '1'; S1 <= '1'; S0 <= '0';
        wait for 10 ns;

        -- H
        S2 <= '1'; S1 <= '1'; S0 <= '1';
        wait for 10 ns;

        wait;
    end process;

end Behavioral;