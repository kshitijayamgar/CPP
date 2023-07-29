#include <iostream>
int main() {
  // size of the square
  int size = 5, alpha = 65;
  for (int i = 0; i < size; i++) {
    // print spaces
    for (int j = 0; j < i; j++) {
	    std::cout << " ";
    }
    // print alphabets
    for (int k = 0; k < 2 * (size - i) - 1; k++) {
	    std::cout << ((char) (alpha + k));
    }
    std::cout << "\n";
  }
  return 0;
}
