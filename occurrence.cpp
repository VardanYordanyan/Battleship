#include <iostream>
#include <sstream>

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

int count ()
{  //This function calculates the number of digits entered
    int inp_num = 0;
    int array [11] = {};
    while (inp_num != -1) {
        inp_num = get_int();
        if (inp_num > 0 && inp_num <= 10){
        ++array[inp_num];
        } else {
            std::cout << "PLEASE INPUT 1 TO 10 NUMBER" << std::endl;
            continue;
        }
    }
    for (int j = 1; j <= 10; ++j){
        std::cout << "NUMBER = " << j  <<  "  ->  COUNT = " << array[j] << std::endl;
    }
}

int main ()
{
    count ();
    return 0;
}
