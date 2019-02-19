#include <iostream>
#include <time.h>
#include <cstdlib>

int x_y(int& x, int& y)
{
    srand (time(NULL));
    x = rand()%10;
    y = rand()%10;
    std::cout << x << std::endl << y;

    return x,y;

}



int main()
{
    char board[10][10] = {{}};
    for (int row = 0; row < 10; ++row) {
        for (int col = 0; col < 10; ++col) {
            board[row][col] = 'O';
            std::cout << board[row][col];
        }
    std::cout << std::endl;
    }
    //std::cout <<  board << std::endl;

    int x = 0;
    int y = 0;
    x_y(x, y);
    //std::cout << x << y;






    return 0;


}
