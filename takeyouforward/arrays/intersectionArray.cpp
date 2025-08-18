#include <iostream>
#include <vector>
using namespace std;

// brute force approach
// use two loops to find the common elements
// keep a visted array to keep track of the visited elements
// if the element is visited, then skip it
// if the element is not visited, then add it to the result array
// and mark it as visited
// visited array should ideally be of size n or m, whichever is smaller

// time complexity - O(n1*n2)
// space complexity - O(n2) - used to return the intersection array

vector<int> intersectionArrayBrute(int arr1[], int arr2[], int n, int m) {
  vector<int> result;
  vector<int> visited(n, 0);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (arr1[i] == arr2[j] && visited[i] == 0) {
        result.push_back(arr1[i]);
        visited[i] = 1;
        break;
      }

      if (arr1[i] < arr2[j]) {
        break;
      }
    }
  }

  return result;
}

// optimal approach
// use two pointers - one for the current element and one for the next unique
// element
// time complexity - O(n1+n2)
// space complexity - O(n1+m2) - used to store and return the intersection array

vector<int> intersectionArrayOptimal(int arr1[], int arr2[], int n, int m) {
  vector<int> result;
  int i = 0, j = 0;
  while (i < n && j < m) {
    if (arr1[i] < arr2[j]) {
      i++;
    } else if (arr2[j] < arr1[i]) {
      j++;
    } else {
      result.push_back(arr1[i]);
      i++;
      j++;
    }
  }

  return result;
}

int main() {

  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 7};
  int n = 5;
  int m = 3;
  vector<int> result = intersectionArrayBrute(arr1, arr2, n, m);

  return 0;
}