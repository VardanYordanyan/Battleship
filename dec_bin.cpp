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
                    std::cout << "Error input ... " << s[i] << std::endl;
                    fl = true;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < s.size(); ++i) {
                if (s[i] < '0' || s[i] > '9') {
                    std::cout << "Error input ... " << s[i] << std::endl;
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

int dec_bin ()
{	int dec = get_int();
	int bin[10];
    int j = 1;
	while (dec != 0) {
		for (int i = 10; i > 0; --i) {
            bin[i] = dec % 2;
        }
        
            dec = dec / 2;
            std::cout << bin[j];
            ++j;
        
        
        
        /*int i = 100;
		i = i - 1;
        bin[i] = dec % 2;
        dec = dec / 2;
	//	std::cout << bin[i];
	}
    for (int j = 1; j < 100; ++j) {
    
		std::cout << bin[j];*/
    } 
}

int main ()
{   
    dec_bin();
	return 0;
}







