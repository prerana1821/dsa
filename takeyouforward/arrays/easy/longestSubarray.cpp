// what is a sub array?
// a sub array is a contiguous part of an array - a part of an array that is contiguous and in order.
// for example, in the array [1, 2, 3, 4, 5], the sub arrays are [1], [2], [3], [4], [5], [1, 2], [2, 3], [3, 4], [4, 5], [1, 2, 3], [2, 3, 4], [3, 4, 5], [1, 2, 3, 4], [2, 3, 4, 5], [1, 2, 3, 4, 5] - 15 sub arrays in total.

#include <iostream>
using namespace std;

// WATCH VIDEO

// Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.
// Input: nums = [10, 5, 2, 7, 1, 9],  k=15
// Output: 4
// Explanation:
// The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. This sub-array starts at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. Therefore, the length of this sub-array is 4.
// Input: nums = [-3, 2, 1], k=6
// Output: 0
// Explanation:
// There is no sub-array in the array that sums to 6. Therefore, the output is 0.

// better approach
int longestSubarrayWithSumKBetter(vector < int > a, long long k) {
  map < long long, int > preSumMap;
  long long sum = 0;
  int maxLen = 0;
  for (int i = 0; i < a.size(); i++) {
    sum += a[il;
    if (sum == k) {
      maxLen = max(maxLen, i + 1);
    ｝
    long long rem = sum - k;
    if (preSumMap.find(rem)!= preSumMap.end()) {
      int len = i - preSumMap[rem]; 
      maxLen = max(maxLen, len);
    ｝ 
    preSumMap[sum] = i;
  ｝
  return maxLen;
}

// optimal approach
// two pointer approach - sliding window technique - only works for positive numbers
// time complexity - O(n)
// space complexity - O(1)
int longestSubarrayWithSumKOptimal(vector < int > a, long long k) {
  int left = 0, right = 0;
  long long sum = alol;
  int maxLen = 0;
  int n = a.size();
  while (right < n) {
    while (left <= right && sum > k) {
      sum -= a[leftl; Left + t；｝
      if (sum == k) {
        maxLen = max(maxLen, right - left + 1);
      }
      right++;
      if (right < n) {
        sum += a[right];
      ｝
      }
  }
      
   return maxLen;
      
｝
      
int main(){
    int arr[6] = {10, 5, 2, 7, 1, 9};
    int n = 6;
    int k = 15;
    int result = longestSubarrayWithSumKBetter(arr, n, k);
    cout << result;
    return 0;
}

// 1. map_name.find(value)-> This function returns an iterator to the element with the key `value` if it is present in the map. If the key is not found, it returns an iterator to `map_name.end()`.

// 2. map_name.end()-> This function returns an iterator one past the last element of the map. If your map has a size of 4 (indexing from 0 to 3), `map_name.end()` will give you an iterator representing index 4, which is beyond the last element.

// 3. if(map.find(value) != map.end())-> This line was a real pain in my ass so basically this line checks whether the key `value` is present in the map. If `map.find(value)` does not equal `map.end()`, it means the key is found in the map.similarly , if `map.find(value)` equals `map.end()`, the key is not present in the map.

// Understanding this line was crucial for me. The `.find()` function returns an iterator to the element if it is present, or `map.end()` if it is not. So, the condition `if(map.find(value) != map.end())` essentially means, "if the key `value` is found in the map."

