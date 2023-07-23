#include <iostream>
int main() {
  // size of the square
  int size = 5;
  // outer loop
  for (int i = 0; i < size; i++) {
    // inner loop
    for (int j = 0; j < size; j++) {
	    std::cout << "*";
    }
    std:: cout << "\n";
  }
  return 0;
}

