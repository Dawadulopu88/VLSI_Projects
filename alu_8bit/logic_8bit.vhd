library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Logic unit: all bitwise results at once
entity logic_8bit is
    Port ( A      : in  STD_LOGIC_VECTOR (7 downto 0);
           B      : in  STD_LOGIC_VECTOR (7 downto 0);
           Y_AND  : out STD_LOGIC_VECTOR (7 downto 0);
           Y_OR   : out STD_LOGIC_VECTOR (7 downto 0);
           Y_XOR  : out STD_LOGIC_VECTOR (7 downto 0);
           Y_NOT  : out STD_LOGIC_VECTOR (7 downto 0);   -- NOT A
           Y_NAND : out STD_LOGIC_VECTOR (7 downto 0);
           Y_NOR  : out STD_LOGIC_VECTOR (7 downto 0));
end logic_8bit;

architecture Dataflow of logic_8bit is
begin

    Y_AND  <= A and B;
    Y_OR   <= A or B;
    Y_XOR  <= A xor B;
    Y_NOT  <= not A;
    Y_NAND <= A nand B;
    Y_NOR  <= A nor B;

end Dataflow;