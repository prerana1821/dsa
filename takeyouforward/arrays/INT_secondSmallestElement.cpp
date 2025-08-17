#include <iostream>
#include <limits.h>
using namespace std;

int secondSmallestElement(int arr[], int n) {
  int smallest = arr[0];
  int secondSmallest = INT_MAX;

  for (int i = 1; i < n; i++) {
    if (arr[i] < smallest) {
      secondSmallest = smallest;
      smallest = arr[i];
    } else if (arr[i] != smallest && arr[i] < secondSmallest) {
      secondSmallest = arr[i];
    }
  }

  return secondSmallest;
}

// OR else if(arr[i] > smallest && arr[i] < secondSmallest){
// time complexity - O(n)
// space complexity - O(1)

int main() {
  int arr[6] = {1, 1, 3, 4, 5, 2};
  int result = secondSmallestElement(arr, 6);
  cout << result;
}