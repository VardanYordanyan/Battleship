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
{	int input_num = get_int();
    int empty_array [10] = {};
	    for (int i = 0; i < 10; ++i){
		    empty_array[i] = 0;
	    }
    if (input_num != -1 && input_num > 0 && input_num <= 10) {
	        for (int j = 0; j < 10; ++j){
                if (input_num = j + 1){ 
                    empty_array[j] = empty_array[j] + 1;
            }
                count();

                return empty_array[j];
        }
    } else if (-1 == input_num) { 
        for (int i = 0; i < 10; ++i){
            //std::cout << k << "number" << empty_array[k] << std::endl;
	        std::cout << empty_array[i];
        } 
    } else if (input_num > 10) {
        count();
    }


}


int main ()
{ count ();

    return 0;
}
