// Recursive function to find the maximum  and minimum elements in an array
#include <iostream>

int findMax(int nums[], int start, int end) {
  // Base case: when there is only one element, it is the maximum
  if (start == end)
    return nums[start];

  // Recursive case: divide the array in half and find the maximum in each half,
  // then return the maximum of the two halves
  int mid = (start + end) / 2;
  int max1 = findMax(nums, start, mid);
  int max2 = findMax(nums, mid + 1, end);

  return (max1 > max2) ? max1 : max2;
}

// Recursive function to find the minimum element in an array
int findMin(int nums[], int start, int end) {
  // Base case: when there is only one element, it is the minimum
  if (start == end)
    return nums[start];

  // Recursive case: Divide the array in half and find the minimum in each half,
  // then return the minimum of the two halves
  int mid = (start + end) / 2;
  int min1 = findMin(nums, start, mid);
  int min2 = findMin(nums, mid + 1, end);

  return (min1 < min2) ? min1 : min2;
}

int main() {
  int nums[] = {
    9,
    2,
    4,
    0,
    2,
    2,
    3,
    4,
    5,
    7
  };
  int size = sizeof(nums) / sizeof(nums[0]);
  std::cout << "Array elements: " << std::endl;
  // loop through the array elements
  for (size_t i = 0; i < size; i++) {
    std::cout << nums[i] << ' ';
  }

  // Find the maximum and minimum elements using recursion
  int max = findMax(nums, 0, size - 1);
  int min = findMin(nums, 0, size - 1);

  std::cout << "\nMaximum element: " << max << std::endl;
  std::cout << "Minimum element: " << min << std::endl;

  return 0;
}

