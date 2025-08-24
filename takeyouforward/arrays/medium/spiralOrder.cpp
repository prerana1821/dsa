// Given an M * N matrix, print the elements in a clockwise spiral manner. Return an array with the elements in the order of their appearance when printed in a spiral manner.


// Examples:
// Input: matrix = [[1, 2, 3], [4 ,5 ,6], [7, 8, 9]]

// Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]

// Explanation: The elements in the spiral order are 1, 2, 3 -> 6, 9 -> 8, 7 -> 4, 5

// Input: matrix = [[1, 2, 3, 4], [5, 6, 7, 8]]

// Output: [1, 2, 3, 4, 8, 7, 6, 5]

// Explanation: The elements in the spiral order are 1, 2, 3, 4 -> 8, 7, 6, 5

// optimal approach
// time complexity - O(m*n)
// space complexity - O(1)
// use four variables to keep track of the top, bottom, left and right boundaries of the matrix and iterate through the matrix and add the elements to the result vector in the correct order by iterating through the matrix and adding the elements to the result vector in the correct order

void spiralOrder(vector<vector<int>>& matrix){
  vector<int> ans;
  int top=0,left=0,right=matrix[0].size()-1,bottom=matrix.size()-1;
  while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
      ans.push_back(matrix[top][i]);
    }
    top++;
    for(int i=top;i<=bottom;i++){
      ans.push_back(matrix[i][right]);
    }
    right--;
    if(top<=bottom){
      for(int i=right;i>=left;i--){
        ans.push_back(matrix[bottom][i]);
      }
      bottom--;
    }
    if(left<=right){
      for(int i=bottom;i>=top;i--){
        ans.push_back(matrix[i][left]);
      }
      left++;
    }
    return ans;
  }
}