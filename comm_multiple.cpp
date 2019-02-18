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



int great_common_divisor(int input_num_1, int input_num_2)
{
	int result = 0;
	int r = 0;
	while (input_num_1 != 0 && input_num_2 != 0){
		r = input_num_1 % input_num_2;
		input_num_1 = input_num_2;
		input_num_2 = r;
	}
	if  (input_num_1 != 0 && input_num_2 != 0){
		result = input_num_1 ;
	} else if (input_num_1 == 0){
		result = input_num_2;
	} else if  (input_num_2 == 0){
		result = input_num_1;}
return result;
}

int smallest_common_miultiple(int input_number_1, int input_number_2, int multiple)
{	
	std::cout << ((input_number_1 * input_number_2) / multiple) << std::endl;

}







int main()
{	int input_number_1 = get_int();
	int input_number_2 = get_int();
	int multiple = great_common_divisor (input_number_1, input_number_2);
	smallest_common_miultiple (input_number_1, input_number_2, multiple);
return 0;
}
