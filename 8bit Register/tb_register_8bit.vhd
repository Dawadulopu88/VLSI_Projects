library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity tb_register_8bit is
-- Testbench entities do not have ports
end tb_register_8bit;

architecture Behavior of tb_register_8bit is

    -- Component declaration for the Unit Under Test (UUT)
    component register_8bit
        Port (
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            LOAD  : in  STD_LOGIC;
            D     : in  STD_LOGIC_VECTOR (7 downto 0);
            Q     : out STD_LOGIC_VECTOR (7 downto 0)
        );
    end component;

    -- Signal declarations
    signal CLK   : STD_LOGIC := '0';
    signal RESET : STD_LOGIC := '0';
    signal LOAD  : STD_LOGIC := '0';
    signal D     : STD_LOGIC_VECTOR(7 downto 0) := (others => '0');
    signal Q     : STD_LOGIC_VECTOR(7 downto 0);

    -- Clock period definition
    constant CLK_PERIOD : time := 10 ns;

begin

    -- Instantiate the Unit Under Test (UUT)
    UUT: register_8bit
        port map (
            CLK   => CLK,
            RESET => RESET,
            LOAD  => LOAD,
            D     => D,
            Q     => Q
        );

    -- Clock process generation (10 ns period)
    CLK_process : process
    begin
        CLK <= '0';
        wait for CLK_PERIOD/2;
        CLK <= '1';
        wait for CLK_PERIOD/2;
    end process;

    -- Stimulus process (Testing functional logic)
    stim_proc: process
    begin
        -- 1. Initial Synchronous Reset Test
        RESET <= '1';
        LOAD  <= '0';
        D     <= "10101010";
        wait for CLK_PERIOD; -- Q should remain "00000000"

        -- 2. Release Reset, LOAD is low -> Output should HOLD current state
        RESET <= '0';
        LOAD  <= '0';
        D     <= "11110000";
        wait for CLK_PERIOD; -- Q should still be "00000000"

        -- 3. LOAD is high -> Data should LOAD into register on Clock Edge
        LOAD  <= '1';
        D     <= "10100101";
        wait for CLK_PERIOD; -- Q becomes "10100101"

        -- 4. Load another value
        D     <= "11001100";
        wait for CLK_PERIOD; -- Q becomes "11001100"

        -- 5. LOAD disabled (LOAD = 0) -> Data should HOLD even if D changes
        LOAD  <= '0';
        D     <= "11111111";
        wait for CLK_PERIOD; -- Q remains "11001100"

        -- 6. Synchronous Reset Test while LOAD is active
        RESET <= '1';
        LOAD  <= '1';
        D     <= "11111111";
        wait for CLK_PERIOD; -- Q resets to "00000000" because RESET has priority

        -- Stop simulation
        wait;
    end process;

end Behavior;