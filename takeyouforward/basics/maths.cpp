#include <bits/stdc++.h>
// #include <math.h>
// #include <string.h>

using namespace std;

// extracting of digits
// reversing of digits
// counting of digits
// time complexity - O(log10(n))
// because we are dividing the number by 10 in each iteration
void extractDigits(int n) {
  int count = 0;
  while (n > 0) {
    int lastDigit = n % 10;
    count = count + 1;
    n = n / 10;
    cout << lastDigit << " ";
  }
  cout << endl << count << endl;
}

// counting of digits using log
int countDigits(int n) { return (int)(log10(n) + 1); }

// whenever the number of iterations depends on division then time complexity
// will be logrithmic whenever the number of iterations depends on
// multiplication then time complexity will be exponential

// reverse a number
int reverse(int n) {
  int rev = 0;
  while (n > 0) {
    int lastDigit = n % 10;
    n = n / 10;
    rev = rev * 10 + lastDigit;
  }
  return rev;
}

// palindrome number
string isPalindrome(int n) {
  int temp = n;
  int rev = 0;
  while (n > 0) {
    int lastDigit = n % 10;
    n = n / 10;
    rev = rev * 10 + lastDigit;
  }
  if (rev == temp) {
    return "true";
  } else {
    return "false";
  }
}

// armstrong number
string isArmstrong(int n) {
  int sum = 0;
  int temp = n;
  while (n > 0) {
    int lastDigit = n % 10;
    n = n / 10;
    sum = sum + lastDigit * lastDigit * lastDigit;
  }
  if (sum == temp) {
    return "true";
  } else {
    return "false";
  }
}

// print all divisors
// time complexity - O(n)
void printDivisors(int n) {
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      cout << i << " ";
    }
  }
}

// print all divisors using sqrt
void printDivisorsUsingSqrt(int n) {
  vector<int> ls;
  for (int i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      ls.push_back(i);
      if (n / i != i) {
        ls.push_back(n / i);
      }
    }
  }
  sort(ls.begin(), ls.end());
  for (auto it : ls) {
    cout << it << " ";
  }
  return;
}

// prime number
// a number which has exactly two divisors 1 and itself
// brute force approach
// time complexity - O(n)
string isPrime(int n) {
  int count = 0;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      count++;
    }
  }
  if (count == 2) {
    return "true";
  } else {
    return "false";
  }
}

// prime number using sqrt
// time complexity - O(sqrt(n))
string isPrimeSqrt(int n) {
  int count = 0;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      count++;
      if (i / n != i) {
        count++;
      }
    }
  }
  if (count == 2) {
    return "true";
  } else {
    return "false";
  }
}

// gcd of two numbers
// or hcf of two numbers
int getGCD(int a, int b) {
  int gcd = 1;
  for (int i = 1; i <= min(a, b); i++) {
    if (a % i == 0 && b % i == 0) {
      gcd = i;
    }
  }
  return gcd;
}

void getGCDFromBehind(int a, int b) {
  for (int i = min(a, b); i >= 1; i--) {
    if (a % i == 0 && b % i == 0) {
      cout << i;
      break;
    }
  }
}

// Euclidean algorithm
// gcd(a, b) = gcd(a-b, b) = gcd(a%b, b) where a > b
// time complexity - O(log(min(a, b)))
int getGCDUsingEuclidean(int a, int b) {
  while (a > 0 && b > 0) {
    if (a > b) {
      a = a % b;
    } else {
      b = b % a;
    }
  }
  if (a == 0) {
    return b;
  } else {
    return a;
  }
}

int main() {
  int n;
  cin >> n;
  extractDigits(n);
  cout << endl;
  int count = countDigits(n);
  cout << count;
  cout << endl;
  int rev = reverse(n);
  cout << rev;
  cout << endl;
  string palindrome = isPalindrome(n);
  cout << palindrome;
  cout << endl;
  string armstrong = isArmstrong(n);
  cout << armstrong;
  cout << endl;
  printDivisors(n);
  cout << endl;
  printDivisorsUsingSqrt(n);
  cout << endl;
  string prime = isPrime(n);
  cout << prime;
  cout << endl;
  string primeSqrt = isPrimeSqrt(n);
  cout << primeSqrt;
  cout << endl;
  int gcd = getGCD(4, 6);
  cout << gcd;
  cout << endl;
  getGCDFromBehind(4, 6);
  cout << endl;
  int gcdEuclidean = getGCDUsingEuclidean(4, 6);
  cout << gcdEuclidean;
  cout << endl;
  return 0;
}