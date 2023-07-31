#include <iostream>
int main(){
    int n = 5;
 
    // looping rows
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= n; j++){
            if (j >= i) {
		    std::cout << "* ";
            }
            else {
		    std:: cout << "  ";
            }
        }
	std::cout << std::endl;
    }
    return 0;
}

