#include <iostream>
#include "print.hpp"

//This function prints the board.
void print (char** ship)
{
    std::cout << "   ";
    for (int i = 1; i < 11; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;
    for (int i = 1; i < 11; ++i){
        if (10 == i) {
            std::cout << i << " ";
        } else {
            std::cout << i << "  ";
        }
        for (int j = 1; j < 11; ++j){
            std::cout << ship[i][j]<< " ";
        }
        std::cout << std::endl;
    }
}

