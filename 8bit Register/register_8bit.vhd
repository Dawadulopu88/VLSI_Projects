library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity register_8bit is
    Port (
        CLK   : in  STD_LOGIC;
        RESET : in  STD_LOGIC;                    -- synchronous, active-high
        LOAD  : in  STD_LOGIC;                    -- load enable
        D     : in  STD_LOGIC_VECTOR (7 downto 0); -- 8-bit Data input
        Q     : out STD_LOGIC_VECTOR (7 downto 0)  -- 8-bit Output
    );
end register_8bit;

architecture Structural of register_8bit is

    -- 1-bit register component declaration
    component register_1bit
        Port (
            CLK   : in  STD_LOGIC;
            RESET : in  STD_LOGIC;
            LOAD  : in  STD_LOGIC;
            D     : in  STD_LOGIC;
            Q     : out STD_LOGIC
        );
    end component;

begin

    -- Generate 8 instances of register_1bit
    GEN_REG: for i in 0 to 7 generate
        REG_INST : register_1bit
            port map (
                CLK   => CLK,
                RESET => RESET,
                LOAD  => LOAD,
                D     => D(i),
                Q     => Q(i)
            );
    end generate GEN_REG;

end Structural;