#include <iostream>
using namespace std;

// Brute force right rotation using temp array
void rightRotateByDBrute(int arr[], int n, int d) {
  d = d % n; // handle d > n

  // store last d elements in temp
  int temp[d];
  for (int i = 0; i < d; i++) {
    temp[i] = arr[n - d + i];
  }

  // shift remaining elements to the right
  for (int i = n - 1; i >= d; i--) {
    arr[i] = arr[i - d];
  }

  // put temp elements at the front
  for (int i = 0; i < d; i++) {
    arr[i] = temp[i];
  }

  // print array
  cout << "Brute right rotation: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

// Helper reverse function
void reverse(int arr[], int start, int end) {
  // reverse array from start to end
  while (start < end) {
    // swap elements
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    // move pointers
    start++;
    end--;
  }
}

// Optimal right rotation using reversal algorithm
void rightRotateByDOptimal(int arr[], int n, int d) {
  d = d % n; // handle d > n

  // reverse entire array
  reverse(arr, 0, n - 1);
  // reverse first d elements
  reverse(arr, 0, d - 1);
  // reverse last n-d elements
  reverse(arr, d, n - 1);

  // print array
  cout << "Optimal right rotation: ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
}

int main() {
  int arr1[5] = {1, 2, 3, 4, 5};
  int arr2[5] = {1, 2, 3, 4, 5};
  int n = 5;
  int d = 2;

  rightRotateByDBrute(arr1, n, d);
  rightRotateByDOptimal(arr2, n, d);

  return 0;
}
