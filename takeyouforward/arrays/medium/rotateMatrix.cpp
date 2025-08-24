// Given an N * N 2D integer matrix, rotate the matrix by 90 degrees clockwise.
// The rotation must be done in place, meaning the input 2D matrix must be modified directly.
// Examples:
// Input: matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
// Output: matrix = [[7, 4, 1], [8, 5, 2], [9, 6, 3]]
// Input: matrix = [[0, 1, 1, 2], [2, 0, 3, 1], [4, 5, 0, 5], [5, 6, 7, 0]]
// Output: matrix = [[5, 4, 2, 0], [6, 5, 0, 1], [7, 0, 3, 1], [0, 5, 1, 2]]

// brute force approach
// time complexity - O(n^2)
// space complexity - O(n^2)
// use a temporary matrix to store the rotated matrix and then copy the temporary matrix to the original matrix by iterating through the matrix and storing the elements in the temporary matrix in the correct order 
// and then copying the temporary matrix to the original matrix by iterating through the temporary matrix and copying the elements to the original matrix in the correct order
void rotateMatrixBrute(vector<vector<int>>& matrix){
  int n = matrix.size();
  vector<vector<int>> temp(n, vector<int>(n));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      temp[j][n-i-1] = matrix[i][j];
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      matrix[i][j] = temp[i][j];
    }
  }
  return;
}

// optimal approach
// time complexity - O(n^2)
// space complexity - O(1)
// transpose the matrix and then reverse each row of the matrix by iterating through the matrix and swapping the elements in the correct order and then reversing each row of the matrix by iterating through each row of the matrix and swapping the elements in the correct order

void rotateMatrix (vector<vector<int>> &mat){
  int n = mat. size ();
  // transpose
  // O(N / 2 * N/ 2)
  for(int i = 0; i<n-1; i++) 1
    for (int j = i + 1; j< n; j++) {
      swap (mat [il [jl, matljllil);
    ｝
  ｝
  // reverse
  // ON * N/2
  for (int i = 0; i<n; i++) {}
    // row is mat(il
    reverse(mat [il. begin(), mat lil. end ()) ;
  }
}