#include <iostream>
using namespace std;

// Given a binary array nums, return the maximum number of consecutive 1s in the array.
// A binary array is an array that contains only 0s and 1s.
// Examples:
// Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]
// Output: 3
// Explanation: The maximum consecutive 1s are present from index 4 to index 6, amounting to 3 1s
// Input: nums = [0, 0, 0, 0, 0, 0, 0, 0]
// Output: 0
// Explanation: No 1s are present in nums, thus we return 0


// time complexity - O(n)
// space complexity - O(1)

int findMaxConsecutiveOnes(int arr[], int n){
  int maxCount = 0;
  int count = 0;

  for(int i=0;i<n;i++){
    if(arr[i] == 1){
      count++;
      if(count > maxCount){
        maxCount = count;
      }
    }
    else{
      count = 0;
    }
  }

  return maxCount;
  
}

int main(){
    int arr[8] = {1, 1, 0, 0, 1, 1, 1, 0};
    int n = 8;
    int result = findMaxConsecutiveOnes(arr, n);
    cout << result;
    return 0;
}