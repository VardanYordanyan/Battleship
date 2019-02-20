#include <iostream>
#include <sstream>

int get_int()
{
    // This function performs checking whether the number is entered
    bool fl = false;
    int result = 0;
    std::string s("");
    do{
        std::cout << "Input decimal number... " << std::endl;
        getline (std::cin, s);
        fl = false;
        for (int i = 1; i < s.size(); ++i) {
            if (s[i] < '0' || s[i] > '9') {
                std::cout << "Error input ... " << s[i] << std::endl;
                fl = true;
                break;
            }
        }
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] < '0' || s[i] > '9') {
                std::cout << "Error input ... " << s[i] << std::endl;
                fl = true;
                break;
            }
        }
    } while (fl);
    std::stringstream str_int(s);
    str_int >> result;
    return result;
}

void dec_bin ()
{	//This function returns the decimal numbers with binar numbers
    int dec = get_int();
    int bin[100] = {};
    int j = 0;
    std::cout << "binar number ..." << std::endl; 
    for (int i = 99; i > 0; --i) {	
        if (dec == 0) {
            break;}
        bin[i] = dec % 2;
        ++j;
        dec = dec / 2;
        }
    for (int i = (100 - j); 100 > i; ++i){
    std::cout << bin[i];}
    std::cout << std::endl;
}

int main ()
{   
    dec_bin();
	return 0;
}







