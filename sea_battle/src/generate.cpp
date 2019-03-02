#include "generate.hpp"
#include "ship_count.hpp"
#include <ctime>
#include <cstdlib>

//This function generates a empty board.
char** generate_board ()
{
    char** board = new char*[12];
    for (int i = 0; i < 12; ++i)
    {
        board[i] = new char[12];
    }
    for (int i = 0; i < 12; ++i) {
    }
    for (int row = 0; row < 12; ++row) {
        for (int col = 0; col < 12; ++col) {
            board[row][col] = '-';
        }
    }
    return board;
}

//This function causes the location of computer ships.
char** gen_cpu_board ()
{
    srand((unsigned)time(0));
    char** ship = generate_board();
    ship_4 (ship);
    ship_3 (ship);
    ship_2 (ship);
    ship_1 (ship);

    return ship;
}

//This function deletes a dynamic array.
void del (char** board)
{
    for (int i = 0; i < 12; ++i) {
        delete  board[i];
    }
}

