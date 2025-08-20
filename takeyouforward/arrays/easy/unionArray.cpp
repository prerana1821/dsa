#include <iostream>
#include <set>
#include <vector>
using namespace std;

// Given two sorted arrays nums1 and nums2, return an array that contains the
// union of these two arrays. The elements in the union must be in ascending
// order. The union of two arrays is an array where all values are distinct and
// are present in either the first array, the second array, or both. 
// Input:
// nums1 = [1, 2, 3, 4, 5], nums2 = [1, 2, 7] Output: [1, 2, 3, 4, 5, 7]
// Explanation: The elements 1, 2 are common to both, 3, 4, 5 are from nums1 and
// 7 is from nums2 Input: nums1 = [3, 4, 6, 7, 9, 9], nums2 = [1, 5, 7, 8, 8]
// Output: [1, 3, 4, 5, 6, 7, 8, 9]
// Explanation: The element 7 is common to both, 3, 4, 6, 9 are from nums1 and
// 1, 5, 8 is from nums2

// brute force approach
// use a set to store the unique elements and insert the elements of the array
// time complexity - nlog(n)+n
// space complexity - O(n1+n2) - used to return the union array
void unionArrayBrute(int arr1[], int arr2[], int n, int m) {
  set<int> s;
  for (int i = 0; i < n; i++) {
    s.insert(arr1[i]);
  }
  for (int i = 0; i < m; i++) {
    s.insert(arr2[i]);
  }
  for (auto it : s)
    cout << it << " ";
  cout << endl;
  return;
}

// optimal approach
// use two pointers - one for the current element and one for the next unique
// element time complexity - O(n1+n2)
// space complexity - O(n1+n2) - used to return the union array
vector<int> unionArrayOptimal(int arr1[], int arr2[], int n, int m) {
  int i = 0, j = 0;
  vector<int> unionArr;

  // compare the elements of both arrays and add the smaller element to the 
  // union array
  while (i < n && j < m) {
    // if the current element of the first array is smaller than the current
    // element of the second array
    if (arr1[i] <= arr2[j]) {
      // if empty or the last element is not equal to the current element
      if (unionArr.empty() || unionArr.back() != arr1[i]) {
        unionArr.push_back(arr1[i]);
      }
      i++;
    } else {
      // if empty or the last element is not equal to the current element
      if (unionArr.empty() || unionArr.back() != arr2[j]) {
        unionArr.push_back(arr2[j]);
      }
      j++;
    }
  }

  // add the remaining elements of the first array to the union array
  while (i < n) {
    if (unionArr.empty() || unionArr.back() != arr1[i]) {
      unionArr.push_back(arr1[i]);
    }
    i++;
  }

  // add the remaining elements of the second array to the union array
  while (j < m) {
    if (unionArr.empty() || unionArr.back() != arr2[j]) {
      unionArr.push_back(arr2[j]);
    }
    j++;
  }

  return unionArr;
}

int main() {
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[3] = {1, 2, 7};
  int n = 5;
  int m = 3;

  unionArrayBrute(arr1, arr2, n, m);

  vector<int> result = unionArrayOptimal(arr1, arr2, n, m);
  cout << "Union: ";
  for (int x : result)
    cout << x << " ";
  cout << endl;

  return 0;
}