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

int min_max(int* a, int n, int& max)
{
	int min = a[0];
	max = a[0];
	for (int i = 1; i < n; ++i ) {
		if (min >= a[i]) {
			min = a[i];
		}
		if (max <= a[i]) {
			max = a[i];
		} 
	}
	return min;
}

int main()
{
	int a[10] = {0};
	for (int i = 0; i < 10; ++i) {
		a[i] = get_int();
	}
	int max = 0;
	int min = min_max(a, 10, max);
	std::cout <<  "Min =  " << min << std::endl;
	std::cout <<  "Max =  " << max << std::endl;
return 0;
}

