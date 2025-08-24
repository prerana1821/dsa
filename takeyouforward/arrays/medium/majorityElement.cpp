// Given an integer array nums of size n, return the majority element of the array.
// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.
// Examples:
// Input: nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]
// Output: 7
// Explanation: The number 7 appears 5 times in the 9 sized array
// Input: nums = [1, 1, 1, 2, 1, 2]
// Output: 1
// Explanation: The number 1 appears 4 times in the 6 sized array

// brute force approach
// time complexity - O(n^2)
// space complexity - O(1)
// use two loops to find the element that appears more than n/2 times
void majorityElementBrute(vector<int>& nums){
  for(int i=0;i<nums.size();i++){
    int count=0;
    for(int j=0;j<nums.size();j++){
      if(nums[i]==nums[j]){
        count++;
      }
    }
    if(count>nums.size()/2){
      return nums[i];
    }
  }
}

// better approach
// time complexity - O(nlogn) + O(n) = O(nlogn)
// space complexity - O(n)
// hashmap to store the frequency of each element and then find the element with the highest frequency
// use a map to store the frequency of each element and then find the element with the highest frequency

void majorityElementBetter(vector<int>& nums){
  unordered_map<int,int> map;
  for(int i=0;i<nums.size();i++){
    map[nums[i]]++;
  }
  for(auto it:map){
    if(it.second>nums.size()/2){
      return it.first;
    }
  }
  return -1;
}

// optimal approach
// time complexity - O(n)
// space complexity - O(1)
// moore's voting algorithm
// rules
// 1. if the count is 0, then the current element is the majority element
// 2. if the current element is the same as the majority element, then increment the count
// if the current element is not the same as the majority element, then decrement the count
void majorityElementOptimal(vector<int>& nums){
  int count=0;
  int candidate=0;
  for(int i=0;i<nums.size();i++){
    if(count==0){
      candidate=nums[i];
      count=1;
    }
   else if(nums[i]==candidate){
      count++;
      
    }
    else{
      count--;
      
    }
  }
  int count1=0;
  for(int i=0;i<nums.size();i++){
    if(nums[i]==candidate){
      count1++;
    }
  }
  if(count1>nums.size()/2){
    return candidate;
  }
  return -1;
}

int main(){
    vector<int> nums = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int result = majorityElementBrute(nums);
    cout << result;
    return 0;
}