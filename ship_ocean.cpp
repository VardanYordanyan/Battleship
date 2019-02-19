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
char** matrix()
{
    char** board = new char*[12];
    for (int i = 0; i < 12; ++i)
    {
           board[i] = new char[12];
    }
    for (int row = 0; row < 12; ++row) {
        for (int col = 0; col < 12; ++col) {
            board[row][col] = 'O';
//            std::cout << board[row][col];
        }
//    std::cout << std::endl;
    }
    //std::cout <<  board << std::endl;
    return board;
}

void destroy (char** board)
{
    for (int i = 0; i < 12; ++i) {
        delete [] board[i];
    }
}

int main()
{
    char** p = matrix();
    std::cout << p[1][1] << std::endl;
    int x = 0;
    int y = 0;
    x_y(x, y);
    //std::cout << x << y;




    destroy(p);

    return 0;


}
