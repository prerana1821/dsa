#include <iostream>
using namespace std;

// Given an array nums of n integers, return true if the array nums is sorted in
// non-decreasing order or else false. Input : nums = [1, 2, 3, 4, 5] Output :
// true Explanation : For all i (1 <= i <= 4) it holds nums[i] <= nums[i+1],
// hence it is sorted and we return true. Input : nums = [1, 2, 1, 4, 5] Output
// : false Explanation : For i == 2 it does not hold nums[i] <= nums[i+1], hence
// it is not sorted and we return false.

void isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] >= arr[i - 1]) {
    } else {
      cout << "false";
      return;
    }
  }
  cout << "true";
  return;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  isSorted(arr, 5);
  return 0;
}