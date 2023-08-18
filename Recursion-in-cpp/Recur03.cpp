#include <iostream>
// Recursive function to calculate the sum of array elements
int arraySum(int arr[], int size) {
  // Base case: if the array is empty, return 0
  if (size == 0)
    return 0;

  // Recursive case: return the sum of the last element and the sum of the rest of the array
  return arr[size - 1] + arraySum(arr, size - 1);
}

int main() {
  int nums[] = {
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    10
  };
  int size = sizeof(nums) / sizeof(nums[0]);

  std::cout << "Array elements: " << std::endl;
  // loop through the array elements
  for (size_t i = 0; i < size; i++) {
    std::cout << nums[i] << ' ';
  }

  // Calculate the sum of the array elements using recursion
  int sum = arraySum(nums, size);

  std::cout << "\nSum of array elements using recursion: " << sum << std::endl;

  return 0;
}

