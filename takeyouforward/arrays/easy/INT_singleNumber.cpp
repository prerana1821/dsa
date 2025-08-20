#include <iostream>
using namespace std;

// WATCH VIDEO

// Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.
// Examples:
// Input : nums = [1, 2, 2, 4, 3, 1, 4]
// Output : 3
// Explanation : The integer 3 has appeared only once.
// Input : nums = [5]
// Output : 5
// Explanation : The integer 5 has appeared only once.

// brute force approach
// time complexity - O(n^2)
// space complexity - O(1)
int singleNumberBrute(int arr[], int n) {
  for(int i=0;i<n;i++){
    int count = 0;
    num = arr[i];
    for(int j=0;j<n;j++){
      if(arr[j] == num){
        count++;
      }
    }
    if(count == 1){
      return num;
    }
  }
  
  return 0;
}

// better approach
// explanation: use a hash array to store the frequency of each element in the array and then find the element with frequency 1 and return it
int singleNumberBetter(int arr[], int n){
  int hash[100000] = {0};
  for(int i=0;i<n;i++){
    hash[arr[i]]++;
  }
  for(int i=0;i<n;i++){
    if(hash[arr[i]] == 1){
      return arr[i];
    }
  }
  return 0;
  // time complexity - O(n)
  // space complexity - O(n)
}

// optimal approach
// time complexity - O(n)
// space complexity - O(1)
// first figure out maximum element in the array
// explanation: XOR of all elements will give the number that appeared once because XOR of two same numbers is 0 and XOR of 0 and any number is the number itself and XOR of any number with itself is 0 so the number that appeared once will be the result
int singleNumberOptimal(int arr[], int n){
  int xor1 = 0;
  for(int i=0;i<n;i++){
    xor1 = xor1 ^ arr[i];
  }
  return xor1;
}

int main(){
    int arr[7] = {1, 2, 2, 4, 3, 1, 4};
    int n = 7;
    int result1 = singleNumberBrute(arr, n);  
    cout << result1;
    int result2 = singleNumberOptimal(arr, n);  
    cout << result2;
    return 0;
}