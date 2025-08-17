#include <iostream>
using namespace std;

// Given an array of integers nums and an integer target, find the smallest
// index (0 based indexing) where the target appears in the array. If the target
// is not found in the array, return -1 Input: nums = [2, 3, 4, 5, 3], target =
// 3 Output: 1 Explanation: The first occurence of 3 in nums is at index 1
// Input: nums = [2, -4, 4, 0, 10], target = 6
// Output: -1
// Explanation: The value 6 does not occur in the array, hence output is -1

int linearSearch(int arr[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[5] = {2, 3, 4, 5, 3};
  int target = 3;
  int n = 5;
  int result = linearSearch(arr, n, target);
  cout << result;
}