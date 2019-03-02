#include "hit.hpp"
#include "print.hpp"
#include "check.hpp"

//This function was printed after hitting the players' board.
void hit (char** cpu_board, char** user_board)
{
    int x = 0;
    int y = 15;
    while (true){
        print(user_board);
        x = check_input();
        x = filtr_command(x, cpu_board);
        y = check_input();
        y = filtr_command(y, cpu_board);
        if (cpu_board[x][y] != 'H') {
            user_board[x][y] = 'o';
        } else {
            user_board[x][y] = 'X';
            chek_kill(cpu_board, user_board, x, y);
        }
    }
}


