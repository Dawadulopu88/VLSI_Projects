library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_register_8bit is
end tb_register_8bit;

architecture Behavioral of tb_register_8bit is

    component register_8bit
        Port ( CLK   : in  STD_LOGIC;
               RESET : in  STD_LOGIC;
               LOAD  : in  STD_LOGIC;
               D     : in  STD_LOGIC_VECTOR (7 downto 0);
               Q     : out STD_LOGIC_VECTOR (7 downto 0));
    end component;

    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal LOAD  : STD_LOGIC := '0';
    signal D     : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
    signal Q     : STD_LOGIC_VECTOR (7 downto 0);

    constant CLK_PERIOD : time := 10 ns;

begin

    -- Device Under Test
    UUT: register_8bit
        port map (
            CLK   => CLK,
            RESET => RESET,
            LOAD  => LOAD,
            D     => D,
            Q     => Q
        );

    -- Clock generation
    CLK_PROC: process
    begin
        CLK <= '0';
        wait for CLK_PERIOD/2;
        CLK <= '1';
        wait for CLK_PERIOD/2;
    end process;

    -- Stimulus
    STIM_PROC: process
    begin
        -- 1) Reset
        RESET <= '1';
        LOAD  <= '0';
        D     <= "10101010";
        wait for 2*CLK_PERIOD;
        assert Q = "00000000"
            report "TEST 1 FAILED: reset e Q = 0 hoyni" severity error;

        -- 2) Load 0xA5
        RESET <= '0';
        LOAD  <= '1';
        D     <= "10100101";
        wait for 2*CLK_PERIOD;
        assert Q = "10100101"
            report "TEST 2 FAILED: 0xA5 load hoyni" severity error;

        -- 3) Hold (LOAD = 0, D change korleo Q change hobe na)
        LOAD  <= '0';
        D     <= "11111111";
        wait for 2*CLK_PERIOD;
        assert Q = "10100101"
            report "TEST 3 FAILED: hold kaj korche na" severity error;

        -- 4) Load 0x3C
        LOAD  <= '1';
        D     <= "00111100";
        wait for 2*CLK_PERIOD;
        assert Q = "00111100"
            report "TEST 4 FAILED: 0x3C load hoyni" severity error;

        -- 5) Reset abar (LOAD = 1 thakleo RESET priority pabe)
        RESET <= '1';
        D     <= "11110000";
        wait for 2*CLK_PERIOD;
        assert Q = "00000000"
            report "TEST 5 FAILED: reset priority kaj korche na" severity error;

        -- 6) Reset off kore load 0xFF
        RESET <= '0';
        LOAD  <= '1';
        D     <= "11111111";
        wait for 2*CLK_PERIOD;
        assert Q = "11111111"
            report "TEST 6 FAILED: 0xFF load hoyni" severity error;

        report "Simulation shesh: shob test complete" severity note;
        wait;
    end process;

end Behavioral;