#include <iostream>
<<<<<<< HEAD
#include <ctime>
#include <cstdlib>
#include <sstream>


char** matrix()
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

void destroy(char** board)
{
	for (int i = 0; i < 12; ++i) {
		delete  board[i];
	}
}

void ship_1 (char** p)
{
	{   int x = 0;
		int y = 0;
		int f = 0;
		while (f < 4) {
			x = rand() % 10 + 1;
			y = rand() % 10 + 1;
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

	}
}

void ship_2(char** p)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int f = 0;
	while (f < 3) {
		z = rand() % 50;
		if (1 == z % 2){
			x = 1 + rand() % 10;
			y = 1 + rand() % 9;
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
				x = 1 + rand() % 9;
				y = 1 + rand() % 10;
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
}

void ship_3(char** p)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int f = 0;
	while (f < 2) {
		z = rand() % 50;
		if (1 == z % 2){
			x = 1 + rand() % 10;
			y = 1 + rand() % 8;

			if ('-' == p[x][y] && '-' == p[x][y+2]){
				std::cout<< "31"<< x << y <<p[x][y] <<std::endl;
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
			x = 1 + rand() % 8;
			y = 1 + rand() % 10;

			if ('-' == p[x][y] && '-' == p[x + 2][y]){
				std::cout << " 30" << x << y<<p[x][y] <<std::endl;
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
	}
}

void ship_4(char** p)
{
	int x = 0;
	int y = 0;
	int z = 0;
	int f = 0;
	while (f < 1) {
		z = rand() % 50;
		if (1 == z % 2){
			x = 1 + rand() % 10;
			y = 1 + rand() % 7;

			std::cout << "axmax1" << std::endl;
			std::cout << "x="<<x << "y="<<y << std::endl;
			if ('-' == p[x][y] && '-' == p[x][y+3]){
				std::cout<< "41 " << x << y<<p[x][y] <<std::endl;
				for (int i = x - 1; i <= x + 1; ++i) {
					for (int j = y - 1; j <= y + 4; ++j) {
						p[i][j] = '*';
					}
				}
				p[x][y] = 'H';
				p[x][y+1] = 'H';
				p[x][y+2] = 'H';
				p[x][y+3] = 'H';
				break;
			} else {
				continue;
			}
		} else {
			std::cout << "axmax0" << std::endl;
			x = 1 + rand() % 7;
			y = 1 + rand() % 10;
			std::cout << "x="<<x << "y="<<y << std::endl;
			if ('-' == p[x + 3][y] && '-' == p[x][y]){
				std::cout<< "40 " << x << y<<p[x][y] <<std::endl;
				for (int i = x - 1; i <= x + 4; ++i) {
					for (int j = y - 1; j <= y + 1; ++j){
						p[i][j] = '*';
					}
				}
				p[x][y] = 'H';
				p[x+1][y] = 'H';
				p[x+2][y] = 'H';
				p[x+3][y] = 'H';
				break;
			} else {
				continue;
			}
		}
	}
}

char** ocean () 
{   srand((unsigned)time(0));
	char** p = matrix();
	int x = 0;
	int y = 0;
	int f = 0;
	int z = 0;
	ship_4 (p);
	ship_2 (p);
	ship_3 (p);
	ship_1 (p);

	return p;



}


void print (char** p)
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
			std::cout << p[i][j]<< " ";
		}

		std::cout << std::endl;
	}


=======
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
>>>>>>> 485481484b182025c7a810273f3c86e2eeaabdf6
}



<<<<<<< HEAD

int get_int()
{
	// This function performs checking whether the number is entered
	bool fl = false;
	int result = 0;
	std::string s("");
	do{
		std::cout << "Input the number... " << std::endl;
		getline (std::cin, s);
		fl = false;
		if (s[0] == '-') {
			for (int i = 1; i < s.size(); ++i) {
				if (s[i] < '0' || s[i] > '9') {
					std::cout << "Error input ... " << std::endl;
					fl = true;
					break;
				}
			}
		}
		else {
			for (int i = 0; i < s.size(); ++i) {
				if (s[i] < '0' || s[i] > '9') {
					std::cout << "Error input ... " << std::endl;
					fl = true;
					break;
				}
			}
		}
	} while (fl);
	std::stringstream str_int(s);
	str_int >> result;
	return result;
}









int main()
{  int x = 0;
	int y = 0;
	int f = 1;
	char** cpu = ocean();
	// print(p);
	char** user = matrix();
	x = get_int();
	y = get_int();
	while (f != 0){
		if (x != 0){
			if (cpu[x][y] != 'H') {
				user[x][y] = 'o';
			} else {
				user[x][y] = 'X';
			} 
print(user);
		} else {
			f = 0;
		}
	}
=======
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
>>>>>>> 485481484b182025c7a810273f3c86e2eeaabdf6




<<<<<<< HEAD
//	destroy(p);

	return 0;
}






































=======
    destroy(p);

    return 0;
}
>>>>>>> 485481484b182025c7a810273f3c86e2eeaabdf6
