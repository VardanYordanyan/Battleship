#include <iostream>

int main()
{

    int a = 35;
    int b = 28;
    std::cout <<" a = " << a << " b = " << b << std::endl;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout <<" a = " << a << " b = " << b << std::endl;
return 0;
}
