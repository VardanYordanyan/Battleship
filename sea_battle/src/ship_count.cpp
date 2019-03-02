#include "ship_count.hpp"
#include <ctime>
#include <cstdlib>



void ship_1 (char** ship)
{
    {   int x = 0;
        int y = 0;
        int ship_lenght = 0; 
        while (ship_lenght < 4) {
            x = rand() % 10 + 1;
            y = rand() % 10 + 1;
            if ('-' == ship[x][y]){

                for (int i = x - 1; i <= x + 1; ++i) {
                    for (int j = y - 1; j <= y + 1; ++j) {
                        if (i == x & j == y){
                            ship[i][j] = 'H';
                        } else {
                            ship[i][j] = '*';
                        }
                    }
                }
                ++ship_lenght;
            } else {
                ship_lenght = ship_lenght + 0;
            }
        }

    }
}
void ship_2(char** ship)
{
    int x = 0;
    int y = 0;
    int direction = 0;
    int ship_lenght = 0; 
    while (ship_lenght < 3) {
        direction = rand() % 50;
        if (1 == direction % 2){
            x = 1 + rand() % 10;
            y = 1 + rand() % 9;
            if ('-' == ship[x][y] && '-' == ship[x][y + 1]){

                for (int i = x - 1; i <= x + 1; ++i) {
                    for (int j = y - 1; j <= y + 2; ++j) {
                        ship[i][j] = '*';
                    }
                }
                ship[x][y+1] = 'H';
                ship[x][y] = 'H';
                ++ship_lenght;
            } else {
                ship_lenght = ship_lenght + 0;
            }
        } else {
            x = 1 + rand() % 9;
            y = 1 + rand() % 10;

            if ('-' == ship[x][y] && '-' == ship[x + 1][y]){
                for (int i = x - 1; i <= x + 2; ++i) {
                    for (int j = y - 1; j <= y + 1; ++j) {
                        ship[i][j] = '*';
                    }
                }
                ship[x][y] = 'H';
                ship[x+1][y] = 'H';
                ++ship_lenght;
            } else {
                ship_lenght = ship_lenght + 0;
            }
        }
    }
}
void ship_3(char** ship)
{
    int x = 0;
    int y = 0;
    int direction = 0;
    int ship_lenght = 0;
    while (ship_lenght < 2) {
        direction = rand() % 50;
        if (1 == direction % 2){
            x = 1 + rand() % 10;
            y = 1 + rand() % 8;

            if ('-' == ship[x][y] && '-' == ship[x][y+2]){
                for (int i = x - 1; i <= x + 1; ++i) {
                    for (int j = y - 1; j <= y + 3; ++j) {
                        ship[i][j] = '*';
                    }
                }
                ship[x][y] = 'H';
                ship[x][y+1] = 'H';
                ship[x][y+2] = 'H';
                ++ship_lenght;
            } else {
                ship_lenght = ship_lenght + 0;
            }
        } else {
            x = 1 + rand() % 8;
            y = 1 + rand() % 10;

            if ('-' == ship[x][y] && '-' == ship[x + 2][y]){
                for (int i = x - 1; i <= x + 3; ++i) {
                    for (int j = y - 1; j <= y + 1; ++j){
                        ship[i][j] = '*';
                    }
                }
                ship[x][y] = 'H';
                ship[x+1][y] = 'H';
                ship[x+2][y] = 'H';
                ++ship_lenght;
            } else {
                ship_lenght = ship_lenght + 0;
            }
        }
    }
}
void ship_4(char** ship)
{
    int x = 0;
    int y = 0;
    int direction = 0;
    int ship_lenght = 0;
    while (ship_lenght < 1) {
        direction = rand() % 100;
        if (1 == direction % 2){
            x = 1 + rand() % 10;
            y = 1 + rand() % 7;

            if ('-' == ship[x][y] && '-' == ship[x][y+3]){
                for (int i = x - 1; i <= x + 1; ++i) {
                    for (int j = y - 1; j <= y + 4; ++j) {
                        ship[i][j] = '*';
                    }
                }
                ship[x][y] = 'H';
                ship[x][y+1] = 'H';
                ship[x][y+2] = 'H';
                ship[x][y+3] = 'H';
                break;
            } else {
                continue;
            }
        } else {
            x = 1 + rand() % 7;
            y = 1 + rand() % 10;
            if ('-' == ship[x + 3][y] && '-' == ship[x][y]){
                for (int i = x - 1; i <= x + 4; ++i) {
                    for (int j = y - 1; j <= y + 1; ++j){
                        ship[i][j] = '*';
                    }
                }
                ship[x][y] = 'H';
                ship[x+1][y] = 'H';
                ship[x+2][y] = 'H';
                ship[x+3][y] = 'H';
                break;
            } else {
                continue;
            }
        }
    }
}

