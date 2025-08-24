#include <iostream>
#include <vector>
using namespace std;
// Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.
// Examples:
// Input: nums = [1, 0, 2, 1, 0]
// Output: [0, 0, 1, 1, 2]
// Explanation: The nums array in sorted order has 2 zeroes, 2 ones and 1 two
// Input: nums = [0, 0, 1, 1, 1]
// Output: [0, 0, 1, 1, 1]
// Explanation: The nums array in sorted order has 2 zeroes, 3 ones and zero twos

// better approach
// time complexity - O(2n)
// space complexity - O(1)
// use three pointers to sort the array in place by counting the number of 0s, 1s, and 2s and then placing them in the array in the correct order by iterating through the array and placing the 0s, 1s, and 2s in the correct order


void sortZeroOneTwoBetter(vector<int>& nums) {
  int c1=0,c2=0,c3=0;
  for(int i=0;i<nums.size();i++){
    if(nums[i]==0){
      c1++;
    } 
    if(nums[i]==1){
      c2++;
    }
    if(nums[i]==2){
      c3++;
    }
  }
  int i=0;
  while(c1--){
    nums[i++]=0;
  }
  while(c2--){
    nums[i++]=1;
  }
  while(c3--){
    nums[i++]=2;
  }
    return;
}


// optimal approach
// time complexity - O(n)
// space complexity - O(1)
// dutch national flag algorithm
// rules
// 1. if the current element is 0, then swap it with the element at the low pointer and increment the low pointer and the mid pointer
// 2. if the current element is 1, then do nothing and increment the mid pointer
// 3. if the current element is 2, then swap it with the element at the high pointer and decrement the high pointer


void sortZeroOneTwoOptimal(vector<int>& nums) {
  int low=0,mid=0,high=nums.size()-1;
  while(mid<=high){
    if(nums[mid]==0){
      swap(nums[low],nums[mid]);
      low++;
      mid++;
    }
    else{
      if(nums[mid]==1){
        mid++;
      }
      else{
        swap(nums[mid],nums[high]);
        high--;
      }
    }
  }
}

int main(){
    vector<int> nums = {1, 0, 2, 1, 0};
    sortZeroOneTwo(nums);
    for(int i=0;i<nums.size();i++){
        cout << nums[i] << " ";
    }
    return 0;
}