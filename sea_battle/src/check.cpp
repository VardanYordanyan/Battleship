#include "check.hpp"
#include <iostream>
#include <sstream>
#include "print.hpp"
#include <stdlib.h>

//This function performs checking whether the given characters are between -1 and 10 interval numbers.
int check_input ()
{
    bool fl = false;
    int result = 0;
    std::string input ("");
    do {
        std::cout << "Input the coordinate 1 to 10... " << std::endl;
        getline (std::cin, input);
        fl = false;
        if (input[0] == '-' && input[1] == '1') {
            break;
        } else if(input[0] == '1' & input[1] == '0') {
            return 10;
        }
        else if (input[0] <= '9' && input[0] >= '0' && input.size() == 1) {
            break;
        } else {
            std::cout << "\033[1;31m Error input...\033[0m\n" << std::endl;
            fl = true;
        }
    } while (fl);
    std::stringstream str_int (input);
    str_int >> result;
    return result;
}


//This function implements the command filtering of what to do with the commanded commands, print the opponent's board(-1), enter the coordinates(enter 1 to 10), or finish the game (enter 0).
int filtr_command (int command, char** cpu_board)
{
    while (-1 == command) {
        print(cpu_board);
        command = check_input();
        if (command > 0) {
            return command;
        } else {
            continue;
        }
    }
    if (0 == command) {
        exit (command);
    } else {
        return command;
    }
}

//Inspects the ship sink or not.
bool chek_kill (char** cpu_board, char** user_board, int x , int y)
{
    bool result = false;
    if ( 'H' == cpu_board[x][y-1] && '-' == user_board[x][y-1]){
        result = false;
    } else if ('H' == cpu_board[x+1][y] && '-' == user_board[x+1][y]){
        result = false;
    } else if ('H' == cpu_board[x][y+1] && '-' == user_board[x][y+1]){
        result = false;
    } else if ('H' == cpu_board[x-1][y] && '-' == user_board[x-1][y]){
        result = false;
    } else {
        result = true;
        std::cout << std::endl <<  "\033[1;33m SHIP IS SUNK...\033[0m\n" << std::endl << std::endl;
    }
    return result;
}


