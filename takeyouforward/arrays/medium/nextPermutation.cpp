// A permutation of an array of integers is an arrangement of its members into a sequence or linear order.
// For example, for arr = [1,2,3], the following are all the permutations of arr:
// [1,2,3], [1,3,2], [2,1,3], [2,3,1], [3,1,2], [3,2,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integers.
// More formally, if all the permutations of the array are sorted in lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted order.
// If such arrangement is not possible (i.e., the array is the last permutation), then rearrange it to the lowest possible order (i.e., sorted in ascending order).
// You must rearrange the numbers in-place and use only constant extra memory.
// Examples:
// Input: nums = [1,2,3]
// Output: [1,3,2]
// Explanation: The next permutation of [1,2,3] is [1,3,2].
// Input: nums = [3,2,1]
// Output: [1,2,3]
// Explanation: [3,2,1] is the last permutation. So we return the first: [1,2,3].


// what is permutation?
// permutation is a way of arranging all the members of a set into some sequence or order.
// what is next permutation?
// next permutation is the next lexicographically greater permutation of the given array.


// brute force approach
// time complexity - O(n!)
// space complexity - O(n)
// generate all permutations and find the next permutation
// use next_permutation function from algorithm library
// use do while loop to generate all permutations and find the next permutation

vector<int> nextPermutationBrute(vector<int>& nums){
  next_permutation(nums.begin(),nums.end());
  return nums;
}


// optimal approach
// time complexity - O(3n)
// space complexity - O(1)

// rules
// 1. find the first decreasing element from the right
// 2. find the first element greater than the first decreasing element from the right
// 3. swap the two elements
// 4. reverse the array from the first decreasing element to the end
// 5. if no such element is found, then reverse the array
// 6. return the array

vector<int> nextPermutationOptimal(vector<int>& nums){
  int n = nums.size(), i, j;
  int index = -1;
  for (i = n - 2; i >= 0; i--) {
    if (nums[i] < nums[i + 1]) {
      // First decreasing element found
      // Now find the next greater element on right of nums[i]
     index  = i;
      break;
    }
  }
  if (i < 0){
    reverse(nums.begin(), nums.end());
    return nums;
  }
    for (j = n - 1; j > i; j--) {
      if (nums[j] > nums[i]) {
        swap(nums[i], nums[j]);
        break;
      }
    }
  reverse(nums.begin() + i + 1, nums.end());
  return nums;
}