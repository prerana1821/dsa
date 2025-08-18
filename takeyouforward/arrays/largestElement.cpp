#include <iostream>
using namespace std;

// Given an array of integers nums, return the value of the largest element in
// the array Input: nums = [3, 3, 6, 1] Output: 6 Explanation: The largest
// element in array is 6 Input: nums = [3, 3, 0, 99, -40] Output: 99
// Explanation: The largest element in array is 99

// take the first element as the largest and compare it with the rest of the
// elements

void largestElement(int arr[], int n) {
  int largest = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }
  cout << largest;
}

int main() {
  int arr[6] = {1, 1, 3, 4, 5, 2};
  // [3, 3, 0, 99, -40]
  largestElement(arr, 6);
}

// time complexity - O(n)
// space complexity - O(1)