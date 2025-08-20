#include <iostream>
#include <limits.h>
using namespace std;

// Given an array of integers nums, return the second-largest element in the
// array. If the second-largest element does not exist, return -1. Input: nums =
// [8, 8, 7, 6, 5] Output: 7 Explanation: The largest value in nums is 8, the
// second largest is 7 Input: nums = [10, 10, 10, 10, 10] Output: -1
// Explanation: The only value in nums is 10, so there is no second largest
// value, thus -1 is returned

// brute force approach
// sort the array in descending order and return the second last element if it
// is not equal to the last element time complexity - O(nlogn) space complexity
// - O(1)

// better approach
// find the largest element and then find the second largest element
// time complexity - O(2n)
// space complexity - O(1)

// optimal approach
// find the largest and second largest element in a single traversal of the
// array and return the second largest element  if it is not equal to the
// largest element time complexity - O(n) space complexity - O(1)

// better approach
int secondLargestElement(int arr[], int n) {
  int largest = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }
  int secondLargest = -1;                   // for the positive values
  int secondLargestWithNegatives = INT_MIN; // for the negative values

  for (int i = 0; i < n; i++) {
    if (arr[i] > secondLargest && arr[i] != largest) {
      secondLargest = arr[i];
      break;
    }
  }

  return secondLargest;
}

// optimal approach
int secondLargestElementOptimal(int arr[], int n) {
  int largest = arr[0];
  int secondLargest = -1;

  for (int i = 1; i < n; i++) {
    // if the current element is greater than the largest element 
    // then update the second largest element and the largest element
    if (arr[i] > largest) {
      secondLargest = largest;
      largest = arr[i];
      // if the current element is less than the largest element and is
      // greater than the second largest element then update the second largest
    } else if(arr[i] < largest && arr[i] > secondLargest){
      secondLargest = arr[i];
    }
  }

  return secondLargest;
}


