#include <iostream>
#include <set>
using namespace std;

// Given an integer array nums sorted in non-decreasing order, remove all
// duplicates in-place so that each unique element appears only once. Return the
// number of unique elements in the array. If the number of unique elements be
// k, then, Change the array nums such that the first k elements of nums contain
// the unique values in the order that they were present originally. The
// remaining elements, as well as the size of the array does not matter in terms
// of correctness. An array sorted in non-decreasing order is an array where
// every element to the right of an element is either equal to or greater in
// value than that element. Input: nums = [0, 0, 3, 3, 5, 6] Output: 4
// Explanation: Resulting array = [0, 3, 5, 6, _, _]
// There are 4 distinct elements in nums and the elements marked as _ can have
// any value. Input: nums = [-2, 2, 4, 4, 4, 4, 5, 5] Output: 4 Explanation:
// Resulting array = [-2, 2, 4, 5, _, _, _, _] There are 4 distinct elements in
// nums and the elements marked as _ can have any value.

// brute force approach
// use a set to store the unique elements and insert the elements of the array
// time complexity - nlog(n)+n
// space complexity - O(n)

void removeDuplicatesBrute(int arr[], int n) {
  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(arr[i]);
  }
  for (auto it : s)
    cout << it << " ";
  cout << endl;
}

// optimal approach
// use two pointers - one for the current element and one for the next unique element
// time complexity - O(n) space complexity - O(1)

void removeDuplicatesOptimal(int arr[], int n) {
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[j] != arr[i]) {
      arr[i + 1] = arr[j];
      i++;
    }
  }
  int newLength = i + 1;
  for (int k = 0; k < newLength; k++) {
    cout << arr[k] << " ";
  }
  cout << endl;
}

int main() {
  int arr[6] = {0, 0, 3, 3, 5, 6};
  int n = 6;
  removeDuplicatesBrute(arr, n);
  removeDuplicatesOptimal(arr, n);

  return 0;
}
