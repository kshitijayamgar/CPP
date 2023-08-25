// Recursive function to calculate the nth Fibonacci number
#include <iostream>

int fibonacci(int n) {
  // Initial: Fibonacci of 0 is 0, Fibonacci of 1 is 1
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;

  // Recursive case: Fibonacci of n is the sum of the previous two Fibonacci numbers
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n;
  std::cout << "Input a number: ";
  std::cin >> n;

  // Find the nth Fibonacci number using recursion
  int fib_num = fibonacci(n);

  std::cout << "The " << n << "th Fibonacci number is: " << fib_num << std::endl;

  return 0;
}

