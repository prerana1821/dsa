#include <iostream>
using namespace std;

// Given an integer array nums and a non-negative integer k, rotate the array to
// the left by k steps. Examples: Input: nums = [1, 2, 3, 4, 5, 6], k = 2
// Output: nums = [3, 4, 5, 6, 1, 2]
// Explanation: rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
// rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]
// Input: nums = [3, 4, 1, 5, 3, -5], k = 8
// Output: nums = [1, 5, 3, -5, 3, 4]
// Explanation: rotate 1 step to the left: [4, 1, 5, 3, -5, 3]
// rotate 2 steps to the left: [1, 5, 3, -5, 3, 4]
// rotate 3 steps to the left: [5, 3, -5, 3, 4, 1]
// rotate 4 steps to the left: [3, -5, 3, 4, 1, 5]
// rotate 5 steps to the left: [-5, 3, 4, 1, 5, 3]
// rotate 6 steps to the left: [3, 4, 1, 5, 3, -5]
// rotate 7 steps to the left: [4, 1, 5, 3, -5, 3]
// rotate 8 steps to the left: [1, 5, 3, -5, 3, 4]

void leftRotateByDBrute(int arr[], int n, int d) {

  // if d is greater than n, then we need to rotate the array by d % n times
  d = d % n;

  // create a temp array of size d
  int temp[d];
  for (int i = 0; i < d; i++) {
    temp[i] = arr[i];
  }

  // shift the elements of the array to the left by d places
  for (int i = d; i < n; i++) {
    arr[i - d] = arr[i];
  }

  // copy the elements of the temp array to the end of the array -  brute force
  int j = 0;
  for (int i = n - d; i < n; i++) {
    arr[i] = temp[j];
    j++;
  }
  // copy the elements of the temp array to the end of the array - optimal
  // approach
  for (int i = n - d; i < n; i++) {
    arr[i] = temp[i - (n - d)];
  }

  // print the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// time complexity - O(n+d)
// space complexity (extra space) - O(d)

// brute force method - shift one by one
void leftRotateByDBrute2(int arr[], int n, int d) {
  d = d % n; // handle cases where d > n
  for (int i = 0; i < d; i++) {
    int temp = arr[0];
    for (int j = 0; j < n - 1; j++) {
      arr[j] = arr[j + 1];
    }
    arr[n - 1] = temp;
  }

  cout << "Brute rotation: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

void reverse(int arr[], int start, int end) {
  while (start < end) {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void leftRotateByDOptimal(int arr[], int n, int d) {

  d = d % n;

  // reverse 0..d-1
  reverse(arr, 0, d - 1);
  // reverse d..n-1
  reverse(arr, d, n - 1);
  // reverse entire array
  reverse(arr, 0, n - 1);

  // print the array
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

// time complexity - O(2n)
// space complexity - O(1) - no extra space used

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;
  int d = 2;

  leftRotateByDBrute(arr, n, d);
  leftRotateByDBrute2(arr, n, d);
  leftRotateByDOptimal(arr, n, d);
  return 0;
}