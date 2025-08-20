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

// optimal approach
// use a map to store the prefix sum and the index of the first occurrence of the prefix sum
int longestSubarrayPostNeg(vector < int > a, long long k) {
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
    if(preSumMap.find(sum) == preSumMap.end()){
      preSumMap[sum] = i;
    }
  return maxLen;
}

int main(){
    int arr[6] = {10, 5, 2, 7, 1, 9};
    int n = 6;
    int k = 15;
    int result = longestSubarray(arr, n, k);
    cout << result;
    return 0;
}
