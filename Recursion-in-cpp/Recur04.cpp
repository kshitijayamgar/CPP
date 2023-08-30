
#include <iostream>
// Recursive function to calculate the factorial

int factorial(int n) {
  // Factorial of 0 or 1 is 1
  if (n == 0 || n == 1)
    return 1;

  // Recursive case: factorial of n is n multiplied by factorial of (n-1)
  return n * factorial(n - 1);
}

int main() {
  int num;
  std::cout << "Input a number: ";
  std::cin >> num;

 // Calculate the factorial using recursion
  int fact = factorial(num);

  std::cout << "Factorial of " << num << " is: " << fact << std::endl;

  return 0;
}

