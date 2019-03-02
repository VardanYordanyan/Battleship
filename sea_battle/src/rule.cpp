#include <iostream>
#include "rule.hpp"

void rule ()
{
	std::cout << "\033[1;36m\n       INSTRUCTION TO THE GAME\n          <BATTLESHIP>" << std::endl;
	std::cout << "- The program generate board and ships, the user guess and hits it. " << std::endl;
	std::cout << "- There are 1 four-dimensional ship, 2 three-dimensional ship, 3 two-dimensional ship and 4 one-dimensional ship. " << std::endl;
	std::cout << "- Enter your hit in this form -> number ENTER number (2 ENTER 6). Your input number should be between 1 and 10." << std::endl;
    std::cout << "- First number is row, second number is column. " << std::endl;
	std::cout << "- The ship is marked whit 'X'. " << std::endl;
	std::cout << "- The miss hit is marked 'o'. " << std::endl;
	std::cout << "- If you want to stop the game enter '0'. " << std::endl;
    std::cout << "- After the ship sank, it is printed   <SHIP IS SUNK...>" << std::endl;
	std::cout << "- If you want to show generation board of cpu enter '-1'. \033[0m" << std::endl;
	std::cout << "\n  \033[1;34m  I WISH GOOD LUCK \033[0m" << std::endl << std::endl;

}
