// Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.
// Each input will have exactly one solution, and the same element cannot be used twice. Return the answer in increasing order.
// Examples:
// Input: nums = [1, 6, 2, 10, 3], target = 7
// Output: [0, 1]
// Explanation: nums[0] + nums[1] = 1 + 6 = 7
// Input: nums = [1, 3, 5, -7, 6, -3], target = 0
// Output: [1, 5]
// Explanation: nums[1] + nums[5] = 3 + (-3) = 0

// WATCH VIDEO

// brute force approach
// time complexity - O(n^2)
// space complexity - O(1)
// use two loops to find the two numbers that add up to the target
int twoSumBrute(int arr[], int n, int target){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(arr[i] === arr[j]){
        continue;
      }
      if(arr[i]+arr[j]==target){
        return {i,j};
      }
    }
  }
}

// better approach
// time complexity - O(n)
// space complexity - O(n)
// use a map to store the difference between the target and the current element and the index of the current element
// if the difference is found in the map, then return the index of the difference and the current index
// if the difference is not found in the map, then store the difference and the current index in the map
// if no such pair is found, then return {-1,-1}
int twoSumBetter(int arr[], int n, int target){
  unordered_map<int, int> map;
  for(int i=0;i<n;i++){
    int diff = target - arr[i];
    if(map.find(diff) != map.end()){
      return {map[diff], i};
    }
    map[arr[i]] = i;
    return {-1,-1};
  }
}

// optimal approach
// time complexity - O(n)
// space complexity - O(1)
// use two pointers to find the two numbers that add up to the target
// if the sum of the two pointers is equal to the target, then return the indices of the two pointers
int twoSumOptimal(int arr[], int n, int target){
  {
  int left = 0, right = n-1;
  sort (book.begin(), book. end ());
  while(left < right) ‹
  int sum = book[left] + book[rightl;
  if (sum == target) ‹ return "YES";
  ｝
  else if(sum ‹ target) left++;
  else right--;
  return "NO";
  }
  
int main(){
    int arr[6] = {1, 6, 2, 10, 3};
    int n = 6;
    int target = 7;
    int resultBrute = twoSumBrute(arr, n, target);
    cout << resultBrute;
    int resultBetter = twoSumBetter(arr, n, target);
    cout << resultBetter;
    int resultOptimal = twoSumOptimal(arr, n, target);
    cout << resultOptimal;
    return 0;
}