#include <iostream>
#include <time.h>
#include <cstdlib>

int x_y(int& x, int& y)
{
    srand (time(NULL));
    x = rand()%10;
    y = rand()%10;
    std::cout <<"x = "<< x << std::endl<<"y =" << y << std::endl;

    return x,y;

}

char** matrix()
{
    char** board = new char*[10];
    for (int i = 0; i < 11; ++i)
    {
        board[i] = new char[10];
    }
    std::cout << "   " ;
    for (int i = 0; i < 10; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (int row = 0; row < 10; ++row) {
        std::cout << row << "  ";
        for (int col = 0; col < 10; ++col) {
            board[row][col] = 'O';
            std::cout << board[row][col] << " ";
        }
        std::cout << std::endl;
    }
    return board;
}



void destroy(char** board)
{
    for (int i = 0; i < 11; ++i) {
        delete  board[i];
    }
}

int main()
{
    char** p = matrix();
    //std::cout << p[1][1] << std::endl;
    int x = 0;
    int y = 0;
    x_y(x, y);
    //std::cout << x << y;




    destroy(p);

    return 0;
}
