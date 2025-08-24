// Given an integer array nums of even length consisting of an equal number of positive and negative integers.Return the answer array in such a way that the given conditions are met:
// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Examples:
// Input : nums = [2, 4, 5, -1, -3, -4]
// Output : [2, -1, 4, -3, 5, -4]
// Explanation: The positive number 2, 4, 5 maintain their relative positions and -1, -3, -4 maintain their relative positions
// Input : nums = [1, -1, -3, -4, 2, 3]
// Output : [1, -1, 2, -3, 3, -4]
// Explanation: The positive number 1, 2, 3 maintain their relative positions and -1, -3, -4 maintain their relative positions

// brute force approach
// time complexity - O(2n)
// space complexity - O(n)
// use two vectors to store the positive and negative integers and then iterate through the vectors and store the integers in the answer vector in the correct order
vector<int> rearrangeArrayBrute(vector<int>& nums){
  vector<int> pos,neg;
  for(int i=0;i<nums.size();i++){
    if(nums[i]>0){
      pos.push_back(nums[i]);
    }
    else{
      neg.push_back(nums[i]);
    }
  }
  vector<int> ans;
  for(int i=0;i<n/2;i++){
    arr[2*i]=pos[i];
    arr[2*i+1]=neg[i]
  }
  return ans;
}

// optimal approach
// time complexity - O(n)
// space complexity - O(1)
// use two pointers to iterate through the array and swap the positive and negative integers in the correct order by iterating through the array and swapping the positive and negative integers in the correct order
vector<int> rearrangeArrayOptimal(vector<int>& nums){
  int n = nums.size();
  vector<int> ans(n, 0);
  int posIndex = 0, negIndex = 1;
  for (int i = 0; i < n; i++){
    if (nums[i] < 0){
      ans[negIndex] = nums[i];
      negIndex += 2;
    }
    else{
      ans[posIndex] = nums[i];
      posIndex += 2;
    }
  }
  return ans;
}