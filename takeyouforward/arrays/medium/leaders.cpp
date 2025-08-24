// Given an integer array nums, return a list of all the leaders in the array.
// A leader in an array is an element whose value is strictly greater than all elements to its right in the given array. The rightmost element is always a leader. The elements in the leader array must appear in the order they appear in the nums array.
// Examples:
// Input: nums = [1, 2, 5, 3, 1, 2]
// Output: [5, 3, 2]
// Explanation: 2 is the rightmost element, 3 is the largest element in the index range [3, 5], 5 is the largest element in the index range [2, 5]
// Input: nums = [-3, 4, 5, 1, -4, -5]
// Output: [5, 1, -4, -5]
// Explanation: -5 is the rightmost element, -4 is the largest element in the index range [4, 5], 1 is the largest element in the index range [3, 5] and 5 is the largest element in the range [2, 5]

#include <iostream>
#include <vector>
using namespace std;

// brute force approach
// time complexity - O(n^2)
// space complexity - O(n)
// use two loops to find the leaders by iterating through the array and checking if the current element is greater than all the elements to its right and if it is, then add it to the leaders array and return the leaders array
vector<int> leadersBrute(vector<int>& nums){
  vector<int> leaders;
  for(int i=0;i<nums.size();i++){
    bool isLeader = true;
    for(int j=i+1;j<nums.size();j++){
      if(nums[i]<nums[j]){
        isLeader = false;
        break;
      }
    }
    if(isLeader){
      leaders.push_back(nums[i]);
    }
    return leaders;
  }
  return leaders;
}

// optimal approach
// time complexity - O(n)
// space complexity - O(n)
// use a variable to keep track of the maximum element found so far and iterate through the array from right to left and if the current element is greater than the maximum element found so far, then add it to the leaders array and return the leaders array
vector<int> leadersOptimal(vector<int>& nums){
  vector<int> leaders;
  int max = nums[nums.size()-1];
  leaders.push_back(max);
  for(int i=nums.size()-2;i>=0;i--){
    if(nums[i]>max){
      leaders.push_back(max);
    }
    max = max(max,nums[i]);
  }
  sort(leaders.begin(),leaders.end());
  return leaders;
}

int main(){
  vector<int> nums = {1, 2, 5, 3, 1, 2};
  vector<int> leaders = leadersBrute(nums);
  for(int i=0;i<leaders.size();i++){
    cout << leaders[i] << " ";
  }
  leaders = leadersOptimal(nums);
  for(int i=0;i<leaders.size();i++){
    cout << leaders[i] << " ";
  }
  return 0;
}