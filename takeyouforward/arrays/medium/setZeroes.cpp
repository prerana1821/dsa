// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0. You must do it in place.


// Examples:
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]

// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Explanation:

// Element at position (1,1) is 0, so set entire row 1 and column 1 to 0.

// Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]

// Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

// Explanation:

// There are two zeroes: (0,0) and (0,3).

// Row 0 → all elements become 0
// Column 0 and column 3 → all elements become 0


// brute force approach
// time complexity - O(n^3)
// space complexity - O(n^3)
// use two loops to find the zeroes and then use two loops to set the rows and columns to zero by iterating through the matrix and setting the rows and columns to zero
void setZeroesBrute(vector<vector<int>>& matrix){
  int n = matrix.size();
  int m = matrix[0].size();
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(matrix[i][j]==0){
        for(int k=0;k<m;k++){
          matrix[i][k]=0;
        }
        for(int k=0;k<n;k++){
          matrix[k][j]=0;
        }
      }
    }
  }
}


// better approach
// time complexity - O(2*m*n)
// space complexity - O(n) + O(m)
// use two vectors to store the rows and columns that need to be set to zero and then use two loops to set the rows and columns to zero by iterating through the matrix and setting the rows and columns to zero by iterating through the vectors and setting the rows and columns to zero 
void setZeroesBetter(vector<vector<int>>& matrix){
  int n = matrix.size();
  int m = matrix[0].size();
  vector<int> row(n,0);
  vector<int> col(m,0);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(matrix[i][j]==0){
        row[i]=1;
        col[j]=1;
      }
    }
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(row[i]==1 || col[j]==1){
          matrix[i][j]=0;
        }
      }
    }
  }
}


// optimal approach
// time complexity - O(n^2)
// space complexity - O(1)
//  use the first row and first column to store the rows and columns that need to be set to zero and then use two loops to set the rows and columns to zero by iterating through the matrix and setting the rows and columns to zero by iterating through the first row and first column and setting the rows and columns to zero
vector<int> setZeroesOptimal(vector<vector<int>>& matrix{
    int n = matrix.size();
    int m = matrix[0].size();
    int col0 = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0){
                    matrix[0][j]=0;
                }
                else{
                    col0=0;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(matrix[i][j]!=0){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
    if(matrix[0][0]==0){
        for(int j=0;j<m;j++){
            matrix[0][j]=0;
        }
    }
    if(col0==0){
        for(int i=0;i<n;i++){
            matrix[i][0]=0;
        }
    }
    return matrix;
}