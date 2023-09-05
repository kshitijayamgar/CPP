// Recursive function to calculate the power of a number
#include <iostream>

int power(int b, int e) {
  // Base case: Any number raised to the power of 0 is 1
  if (e == 0)
    return 1;

  // Recursive case: Calculate the power using recursion
  // by multiplying the base with the power of (exponent - 1)
  return b * power(b, e - 1);
}

int main() {
  int b, e;
  std::cout << "Input the base number: ";
  std::cin >> b;
  std::cout << "Input the exponent: ";
  std::cin >> e;

  // Calculate the power using recursion
  int result = power(b, e);

  std::cout << b << " raised to the power of " << e << " is: " << result << std::endl;

  return 0;
}

