#include <iostream>
using namespace std;

// Given an array of N integers, left rotate the array by one place.
// Example 1:
// Input: N = 5, array[] = {1,2,3,4,5}
// Output: 2,3,4,5,1
// Explanation:
// Since all the elements in array will be shifted
// toward left by one so ‘2’ will now become the
// first index and and ‘1’ which was present at
// first index will be shifted at last.
// Input: N = 1, array[] = {3}
// Output: 3
// Explanation: Here only element is present and so
// the element at first index will be shifted to
// last index which is also by the way the first index.

// cannot use new array
// cannot use extra space

// time complexity - O(n)
// space complexity - O(1) 

// what is the space used in the algorithm?
// O(n)
// what is the extra space used in the algorithm?
// O(1)

void leftRotateByOne(int arr[], int n) {
  int temp = arr[0];
  for (int i = 1; i < n; i++) {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int n = 5;

  leftRotateByOne(arr, n);
  return 0;
}