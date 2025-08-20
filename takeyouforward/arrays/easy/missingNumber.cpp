// Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.
// Input: nums = [0, 2, 3, 1, 4]
// Output: 5
// Explanation: nums contains 0, 1, 2, 3, 4 thus leaving 5 as the only missing number in the range [0, 5]
// Input: nums = [0, 1, 2, 4, 5, 6]
// Output: 3
// Explanation: nums contains 0, 1, 2, 4, 5, 6 thus leaving 3 as the only missing number in the range [0, 6]


// brute force approach
// time complexity - O(n^2)
// space complexity - O(1)
// check if each number from 0 to n is present in the array or not
// if not present, then that is the missing number
// if present, then continue
// if all numbers are present, then return -1
// if the array is empty, then return -1
// if the array is not empty, then return the missing number
void missingNumberBrute(int arr[], int n){
    for(int i=0; i<n; i++){
        int flag = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << i << endl;
            break;
        }
    }
}

// better approach
// using hashing
// time complexity - O(2n)
// space complexity - O(n)
int missingNumberBetter(int arr[], int n) {
    int hash[n + 1] = {0};

    // mark the elements as 1 in the hash array
    for (int i = 0; i < n; i++) {
        hash[arr[i]] = 1;
    }
    // find the first element in the hash array which is 0
    for (int i = 0; i < n; i++)
    {
        if (hash[i] == 0){ 
            return i;
        }
        break;
    }
}

// optimal approach
// using sum of first n natural numbers
// time complexity - O(n)
// space complexity - O(1)
void missingNumberOptimalSum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int totalSum = (n*(n+1))/2;
    int missingNumber = totalSum - sum;
    cout << missingNumber << endl;
    return;
}

// optimal approach
// using xor
// concept - a ^ a = 0, a ^ 0 = a
// time complexity - O(n)
// space complexity - O(1)
void missingNumberOptimalXor(int arr[], int n){
    int xor1 = 0, xor2 = 0;
    for(int i=0; i<n-1; i++){
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ i+1;
    }
    xor1 = xor1 ^ n;
    int missingNumber = xor1 ^ xor2;
    cout << missingNumber << endl;
    return;
}

// XOR solution is better because it does not require extra space and it is more efficient than the sum solution
// as summation can cause overflow for large values of n for example n = 10^9
// XOR of all numbers will not be that big so no overflow


int main(){
    int arr[5] = {0, 2, 1, 4};
    int n = 5;
    missingNumberBrute(arr, n);
}