// Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.
// A subarray is a contiguous non-empty sequence of elements within an array.
// Examples:
// Input: nums = [2, 3, 5, -2, 7, -4]
// Output: 15
// Explanation: The subarray from index 0 to index 4 has the largest sum = 15
// Input: nums = [-2, -3, -7, -2, -10, -4]
// Output: -2
// Explanation: The element on index 0 or index 3 make up the largest sum when taken as a subarray


// brute force approach
// time complexity - O(n^3)
// space complexity - O(1)
// use three loops to find the subarray with the largest sum by iterating through all possible subarrays and calculating the sum of each subarray and keeping track of the maximum sum found
int maxSubArrayBrute(int arr[], int n){
  int maxSum = INT_MIN;
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      int sum = 0;
      for(int k=i;k<=j;k++){
        sum += arr[k];
      }
      maxSum = max(maxSum, sum);
    }
  }
  return maxSum;
}

// better approach
// time complexity - O(n^2)
// space complexity - O(1)
// use two loops to find the subarray with the largest sum by iterating through all possible subarrays and calculating the sum of each subarray and keeping track of the maximum sum found
int maxSubArrayBetter(int arr[], int n){
  int maxSum = INT_MIN;
  for(int i=0;i<n;i++){
    int sum = 0;
    for(int j=i;j<n;j++){
      sum += arr[j];
      maxSum = max(maxSum, sum);
    }
  }
  return maxSum;
}

// optimal approach
// time complexity - O(n)
// space complexity - O(1)
// use kadane's algorithm to find the subarray with the largest sum by iterating through the array and keeping track of the maximum sum found and the current sum found

void maxSubArrayOptimal(int arr[], int n){
   int sum = 0, maxSum = INT_MIN;
    int start = 0, ansStart = 0, ansEnd = 0;

    for (int i = 0; i < n; i++) {
        if (sum == 0) start = i;   
        sum += arr[i];

        if (sum > maxSum) {
            maxSum = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;  
        }
    }

   cout << "The sum is: " << maxSum << endl;
   cout << "The subarray is: "; 
   for (int i = ansStart; i <= ansEnd; i++){
       cout << arr[i] << " ";
   }
}

int main(){
    int arr[6] = {2, 3, 5, -2, 7, -4};
    int n = 6;
    int result = maxSubArrayBrute(arr, n);
    cout << result;
    result = maxSubArrayBetter(arr, n);
    cout << result;
    maxSubArrayOptimal(arr, n);
    return 0;
}