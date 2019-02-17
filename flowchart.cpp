#include <iostream>
#include <cstdlib>
#include <sstream>
#include <string>

int get_int()
{
    // This function performs checking whether the number is entered
    bool fl=false;
    int result = 0;
    std::string s("");
    do{
        std::cout << "Input the number... " << std::endl;
        getline(std::cin, s);
        fl = false;
        if (s[0] == '-') {
            for (int i = 1; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Error input ... " << s[i] << std::endl;
                    fl=true;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < s.size(); ++i) {
                if(s[i] < '0' || s[i] > '9') {
                    std::cout << "Error input ... " << s[i] << std::endl;
                    fl=true;
                    break;
                }
            }
        }
    } while(fl);
    std::stringstream str_int(s);
    str_int >> result;
    return result;
}

int great_common_divisor()
{
	int input_num_1 = get_int();
	int input_num_2 = get_int();
	int r = 0;
	while (input_num_1 != 0 && input_num_2 != 0){
		r = input_num_1 % input_num_2;
		input_num_1 = input_num_2;
		input_num_2 = r;
	}
    if  (input_num_1 != 0 && input_num_2 != 0){
	    std::cout << input_num_1 << std::endl;
    } else if (input_num_1 == 0){
        std::cout << input_num_2 << std::endl;
    } else if  (input_num_2 == 0){
        std::cout << input_num_1 << std::endl;}
}

int main()
{
	great_common_divisor();
return 0;
}
