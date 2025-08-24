// Given an array nums of n integers.
// Return the length of the longest sequence of consecutive integers. The integers in this sequence can appear in any order.
// Examples:
// Input: nums = [100, 4, 200, 1, 3, 2]
// Output: 4
// Explanation:
// The longest sequence of consecutive elements in the array is [1, 2, 3, 4], which has a length of 4. This sequence can be formed regardless of the initial order of the elements in the array.
// Input: nums = [0, 3, 7, 2, 5, 8, 4, 6, 0, 1]
// Output: 9
// Explanation:
// The longest sequence of consecutive elements in the array is [0, 1, 2, 3, 4, 5, 6, 7, 8], which has a length of 9. 

This sequence can be formed regardless of the initial order of the elements in the array.

// brute force approach
  // time complexity - O(n^2)
  // space complexity - O(1)
  // use two loops to find the longest sequence of consecutive integers by iterating through the array and checking if the current element is the start of a sequence of consecutive integers and if it is, then check if the sequence is longer than the longest sequence found so far and if it is, then update the longest sequence found so far and return the length of the longest sequence found so far
int longestConsecutiveBrute(vector<int>& nums){
  int longest = 1;
  for (int i = 0; i < nums.size(); i++){
    int x = nums[i];
    int count = 1;
    while (find(nums.begin(), nums.end(), x + 1) != nums.end()){
      x += 1;
      count += 1;
    }
    longest = max(longest, count);
    return longest;
  }
}

// better approach
// time complexity - O(nlogn)
// space complexity - O(1)
// sort the array and then iterate through the array and check if the current element is the start of a sequence of consecutive integers and if it is, then check if the sequence is longer than the longest sequence found so far and if it is, then update the longest sequence found so far and return the length of the longest sequence found so far     

int longestConsecutiveBetter(vector<int>& nums){
  if (nums.size() == 0){
    return 0;
  }
  sort(nums.begin(), nums.end());
  int longest = 1;
  int lastSmaller = INT_MIN;
  int count = 0;
  for (int i = 0; i < nums.size(); i++){
    if (nums[i] - 1 == lastSmaller){
      count += 1;
      lastSmaller = nums[i];
    } else if (nums[i] != lastSmaller){
      count = 1;
      lastSmaller = nums[i];
    }
    longest = max(longest, count);
  }
  return longest;
}

// optimal approach
// time complexity - O(3n)
// space complexity - O(n)
// use a set to store the elements of the array and then iterate through the array and check if the current element is the start of a sequence of consecutive integers and if it is, then check if the sequence is longer than the longest sequence found so far and if it is, then update the longest sequence found so far and return the length of the longest sequence found so far by iterating through the set and checking if the current element is the start of a sequence of consecutive integers and if it is, then check if the sequence is longer than the longest sequence found so far and if it is, then update the longest sequence found   so far and return the length of the longest sequence found so far
int longestConsecutiveOptimal(vector<int>& nums){
  unordered_set<int> hashSet;
  for (int num : nums){
    hashSet.insert(num);
  }
  int longestStreak = 0;
  for (int num : nums){
    if (!hashSet.count(num - 1)){
      int currentNum = num;
      int currentStreak = 1;
      while (hashSet.count(currentNum + 1)){
        currentNum += 1;
        currentStreak += 1;
        longestStreak = max(longestStreak, currentStreak);
      }
      longestStreak = max(longestStreak, currentStreak);
    }
  }
  return longestStreak;
}