#include <iostream>
int main() {
  // size of the triangle
  int size = 5;
  for (int i = 0; i < size; i++) {
    // print stars
    for (int j = 0; j < size - i; j++) {
	    std::cout << "*";
    }
    std::cout << "\n";
  }
  return 0;
}
