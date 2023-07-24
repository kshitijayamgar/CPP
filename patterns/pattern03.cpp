#include <iostream>

int main() {
  // size of the triangle
  int size = 5;
  // loop to print the pattern
  for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j <= i; j++) {
	    std::cout << "*";
    }
    std::cout << "\n";
  }
  return 0;
}
