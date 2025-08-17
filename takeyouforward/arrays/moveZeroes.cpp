#include <iostream>
using namespace std;

// Given an integer array nums, move all the 0's to the end of the array. The
// relative order of the other elements must remain the same. This must be done
// in place, without making a copy of the array. Input: nums = [0, 1, 4, 0, 5,
// 2] Output: [1, 4, 5, 2, 0, 0] Explanation: Both the zeroes are moved to the
// end and the order of the other elements stay the same Input: nums = [0, 0, 0,
// 1, 3, -2] Output: [1, 3, -2, 0, 0, 0] Explanation: All 3 zeroes are moved to
// the end and the order of the other elements stay the same

// brute force approach
// store the non zero elements in a new array and then copy the new array to the
// original array
// time complexity - O(2n)
// space complexity - O(n)
void moveZeroesBrute(int arr[], int n) {

  // store non zero elements in temp array
  int temp[n];
  for (int i = 0; i < n; i++) {
    if (arr[i] != 0) {
      temp[i] = arr[i];
    }
  }

  // pick up everything from temp and put it in arr
  for (int i = 0; i < temp.size(); i++) {
    arr[i] = temp[i];
  }

  // put zeroes at the end of the array
  for (int i = temp.size(); i < n; i++) {
    arr[i] = 0;
  }

  // print the array
  for (int i = 0; i < n; i++) {
    cout << temp[i] << " ";
  }
}

// optimal approach
// use two pointers - one for the current element and one for the next non zero
// element time complexity - O(n) space complexity - O(1)

void swap(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
  return;
}

void moveZeroesOptimal(int arr[], int n) {

  // find the first zero
  int j = -1;
  for (int i = 0; i < n; i++) {
    if (arr[i] == 0) {
      j = i;
      break;
    }
  }

  // if there is no zero, return
  if (j == -1) {
    return;
  }

  // find the next non zero element and swap it with the zero
  for (int i = j + 1; i < n; i++) {
    if (arr[i] != 0) {
      swap(arr[i], arr[j]);
      j++;
    }
  }

  // print the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[6] = {0, 1, 4, 0, 5, 2};
  int n = 6;

  moveZeroesBrute(arr, n);
  moveZeroesOptimal(arr, n);

  return 0;
}