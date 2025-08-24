// Given an array arr of n integers, where arr[i] represents price of the stock on the ith day. Determine the maximum profit achievable by buying and selling the stock at most once. 
// The stock should be purchased before selling it, and both actions cannot occur on the same day.
// Examples:
// Input: arr = [10, 7, 5, 8, 11, 9]
// Output: 6
// Explanation: Buy on day 3 (price = 5) and sell on day 5 (price = 11), profit = 11 - 5 = 6.
// Input: arr = [5, 4, 3, 2, 1]
// Output: 0
// Explanation: In this case, no transactions are made. Therefore, the maximum profit remains 0.

// time complexity - O(n)
// space complexity - O(1)
// dynamic programming approach
// use two variables to keep track of the minimum price and the maximum profit
// iterate through the array and update the minimum price and the maximum profit accordingly
// return the maximum profit

int stockBuySell(vector<int>& arr){
  int minPrice = INT_MAX;
  int maxProfit = 0;
  for(int i=0;i<arr.size();i++){
    minPrice = min(minPrice, arr[i]);
    int cost = arr[i] - minPrice;
    maxProfit = max(maxProfit, cost);
  }
  return maxProfit;
}

inr main(){
  vector<int> arr = {10, 7, 5, 8, 11, 9};
  int result = stockBuySell(arr);
  cout << result;
  return 0;
}