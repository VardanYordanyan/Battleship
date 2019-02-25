#include <iostream>
#include <ctime>
#include <cstdlib>

char** matrix()
{
    char** board = new char*[12];
    for (int i = 0; i < 12; ++i)
    {
        board[i] = new char[12];
    }
    //std::cout << "   " ;
    for (int i = 0; i < 12; ++i) {
        //std::cout << i << " ";
    }
    //std::cout << std::endl;
    //std::cout << std::endl;
    for (int row = 0; row < 12; ++row) {
        //std::cout << row << "  ";
        for (int col = 0; col < 12; ++col) {
            board[row][col] = '-';
      //      std::cout << board[row][col] << " ";
        }
        //std::cout << std::endl;
    }
    return board;
}


void destroy(char** board)
{
    for (int i = 0; i < 12; ++i) {
        delete  board[i];
    }
}






int main()
{   srand((unsigned)time(0));
     char** p = matrix();
     int x = 0;
     int y = 0;
     int f = 0;
     int z = 0;
     while (f < 4) {
         x = rand() % 9 + 1;
         y = rand() % 9 + 1;
         if ('-' == p[x][y]){

         std::cout <<"10"<< x << y << std::endl;
            for (int i = x - 1; i <= x + 1; ++i) {
                for (int j = y - 1; j <= y + 1; ++j) {
                    if (i == x & j == y){
                        p[i][j] = 'H';
                    } else {
                    p[i][j] = '*';
                    }
                }
            }
                ++f;
        } else {
            f = f + 0;
        }
     }

f = 0;
 while (f < 3) {
     z = rand() % 50;
     if (1 == z % 2){
         x = 1 + rand() % 9;
         y = 1 + rand() % 7;
         //std::cout <<"2"<< x << y << std::endl;
         if ('-' == p[x][y] && '-' == p[x][y + 1]){

         std::cout <<"21"<< x << y << std::endl;
             for (int i = x - 1; i <= x + 1; ++i) {
                 for (int j = y - 1; j <= y + 2; ++j) {
                     p[i][j] = '*';
                 }
             }
             p[x][y+1] = 'H';
             p[x][y] = 'H';
             ++f;
         } else {
             f = f + 0;
         }
     } else {
         if ('-' == p[x][y] && '-' == p[x + 1][y]){
             x = 1 + rand() % 7;
             y = 1 + rand() % 9;


         std::cout <<"20"<< x << y << std::endl;
             for (int i = x - 1; i <= x + 2; ++i) {
                 for (int j = y - 1; j <= y + 1; ++j) {
                     p[i][j] = '*';
                 }
             }
            p[x][y] = 'H';
            p[x+1][y] = 'H';
             ++f;
         } else {
             f = f + 0;
         }
     }
 }

/*
 f = 0;
 while (f < 2) {
        z = rand() % 50;
     if (1 == z % 2){
  x = 1 + rand() % 9;
     y = 1 + rand() % 6;

         if ('-' == p[x][y + 2] && '-' == p[x][y] ){
             //  std::cout<< x << y<<p[x][y] <<std::endl;
             for (int i = x - 1; i <= x + 1; ++i) {
                for (int j = y - 1; j <= y + 3; ++j) {
                    p[i][j] = '*';
                }
            }
             p[x][y] = 'H';
             p[x][y+1] = 'H';
             p[x][y+2] = 'H';
             ++f;
         } else {
             f = f + 0;
         }
     } else {
     if ('-' == p[x + 2][y] && '-' == p[x][y]){
  x = 1 + rand() % 6;
     y = 1 + rand() % 9;

         //    std::cout<< x << y<<p[x][y] <<std::endl;
             for (int i = x - 1; i <= x + 3; ++i) {
                for (int j = y - 1; j <= y + 1; ++j){
                    p[i][j] = '*';
                }
             }
             p[x][y] = 'H';
             p[x+1][y] = 'H';
             p[x+2][y] = 'H';
             ++f;
         } else {
             f = f + 0;
         }
     }
 
 }*/











        std::cout << "   ";
    for (int i = 0; i < 12; ++i) {
        std::cout << i << " ";
    }
    std::cout << std::endl << std::endl;
    for (int i = 0; i < 12; ++i){
        if (10 == i) {
            std::cout << i << " ";
        } else {
            std::cout << i << "  ";
        }
         for (int j = 0; j < 12; ++j){
             std::cout << p[i][j]<< " ";
         }

         std::cout << std::endl;
         }

     destroy(p);

    return 0;
}
