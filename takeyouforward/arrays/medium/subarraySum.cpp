// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// Examples:
// Input: nums = [1, 1, 1], k = 2
// Output: 2
// Explanation: In the given array [1, 1, 1], there are two subarrays that sum up to 2: [1, 1] and [1, 1]. Hence, the output is 2.
// Input: nums = [1, 2, 3], k = 3
// Output: 2
// Explanation: In the given array [1, 2, 3], there are two subarrays that sum up to 3: [1, 2] and [3]. Hence, the output is 2.

// brute force approach
// time complexity - O(n^3)
// space complexity - O(1)
// use three loops to find the subarray with the sum equal to k by iterating through all possible subarrays and calculating the sum of each subarray and keeping track of the number of subarrays with the sum equal to k
int subarraySumBrute(vector<int>& nums, int k){
  int count = 0;
  for(int i=0;i<nums.size();i++){
    for(int j=i;j<nums.size();j++){
      int sum = 0;
      for(int k=i;k<=j;k++){
        sum += nums[k];
      }
      if(sum == k){
        count++;
      }
    }
  }
  return count;
}

// better approach
// time complexity - O(n^2)
// space complexity - O(1)
// use two loops to find the subarray with the sum equal to k by iterating through all possible subarrays and calculating the sum of each subarray and keeping track of the number of subarrays with the sum equal to k
int subarraySumBetter(vector<int>& nums, int k){
  int count = 0;
  for(int i=0;i<nums.size();i++){
    int sum = 0;
    for(int j=i;j<nums.size();j++){
      sum += nums[j];
    }
    if(sum == k){
      count++;
    }
  }
  return count;
}

// optimal approach
// time complexity - O(n)
// space complexity - O(n)
// use a map to store the prefix sum and the number of times it has occurred and then iterate through the array and calculate the prefix sum and check if the prefix sum
 // - k has occurred in the map and if it has, then increment the count by the number of times it has occurred and return the count
int subarraySumOptimal(vector<int>& nums, int k){
  map<int, int> mpp;
  mpp [0] = 1;
  int preSum = 0, cnt = 0;
  for(int i = 0; i<arr.size(); i++) {
  preSum += arr[il;
  int remove = preSum - k;
  cnt += mpp [removel; mpp [preSum] += 1;
  return cnt;
}

int main(){
    vector<int> nums = {1, 1, 1};
    int k = 2;
    int resultBrute = subarraySumBrute(nums, k);
    cout << resultBrute;
    int resultBetter = subarraySumBetter(nums, k);
    cout << resultBetter;
    int resultOptimal = subarraySumOptimal(nums, k);
    cout << resultOptimal;
    return 0;
  
}