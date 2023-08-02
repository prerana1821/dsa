#include <iostream>
#include <string>
// #include<bits/stdc++.h>
using namespace std;

int sum(int num1, int num2) {
  int num3 = num1 + num2;
  return num3;
}

// pass by value
// void doSomething(int num){
//   cout << num << endl;
//   num += 5;
//   cout << num << endl;
//   num += 10;
//   cout << num << endl;
// }

// void doSomethingWStr(string name){
//   name[0] = 'T';
//   cout << name << endl;
// }

void doSomethingWStr(string &name) {
  name[0] = 'T';
  cout << name << endl;
}

// pass by reference
void doSomething(int &num) {
  cout << num << endl;
  num += 5;
  cout << num << endl;
  num += 10;
  cout << num << endl;
}

void doSomethingWArr(int arr[]) {
  arr[0] += 100;
  cout << "Value inside function: " << arr[0] << endl;
}

// returns a random value
// int maxx(int num1, int num2){
//   // 5 >= 6
//   if(num1 >= num2) return num1;
//   // looking for a random value
// }

// int maxx(int num1, int num2){
//   if(num1 >= num2) return num1;
//   else return num2;
// }

int main() {

  // input/output
  // int x, y;
  // cout << "Hello World!" << endl;
  // cout << "Prerana" << endl;
  // cin >> x >> y;
  // cout << "Value of x: " << x << "and y: " << y;

  // data types

  // int, long, long long, float, double
  // int a =10;
  // cout << a << "\n";

  // long b = 20000000000;
  // cout << b << "\n";

  // long long c = 20;
  // cout << c << "\n";

  // float d = 10.233;
  // double e = 2003.99;
  // double f = 2;

  // cout << d << "\n";
  // cout << e << "\n";
  // cout << f << "\n";

  // string & getline
  // string g;
  // cin >> g;
  // cout << g;

  // string g,h;
  // cin >> g >> h;
  // cout << g << " " << h;

  // string h;
  // getline(cin, h);
  // cout << h;

  // char
  // char i;
  // cin >> i;
  // cout << i;

  // char j = 'a';
  // cout << j;

  // if else

  // int age;
  // cin >> age;
  // if(age >= 18) {
  //   cout << "Adult";
  // } else {
  //   cout << "Child";
  // }

  // int marks;
  // cin >> marks;

  // if (marks >= 80 && marks <= 100) {
  //   cout << "A";
  // } else if (marks >= 60 && marks <= 79) {
  //   cout << "B";
  // } else if (marks >= 50 && marks <= 59) {
  //   cout << "c";
  // } else if (marks >= 45 && marks <= 49) {
  //   cout << "D";
  // } else if (marks >= 25 && marks <= 44) {
  //   cout << "E";
  // } else {
  //   cout << "F";
  // }

  // int marks;
  // cin >> marks;

  // if (marks >= 80) {
  //   cout << "A";
  // } else if (marks >= 60) {
  //   cout << "B";
  // } else if (marks >= 50) {
  //   cout << "c";
  // } else if (marks >= 45) {
  //   cout << "D";
  // } else if (marks >= 25) {
  //   cout << "E";
  // } else {
  //   cout << "F";
  // }

  // int age;
  // cin >> age;

  // if (age < 18) {
  //   cout << "not eligible for job";
  // } else if (age <= 54) {
  //   cout << "eligible for job";
  // } else if (age <= 57) {
  //   cout << "eligible for job, but retirement soon";
  // } else {
  //   cout << "retirement time";
  // }

  // nested if else

  // int age;
  // cin >> age;

  // if (age < 18) {
  //   cout << "not eligible for job";
  // } else if (age <= 57) {
  //   cout << "eligible for job";
  //   if (age >= 55) {
  //     cout << ", but retirement soon";
  //   }
  // } else {
  //   cout << "retirement time";
  // }

  // switch

  // int day;
  // cin >> day;

  // switch (day) {
  // case 1:
  //   cout << "Sunday";
  //   break;
  // case 2:
  //   cout << "Monday";
  //   break;
  // case 3:
  //   cout << "Tuesday";
  //   break;
  // case 4:
  //   cout << "Wednesday";
  //   break;
  // case 5:
  //   cout << "Thursday";
  //   break;
  // case 6:
  //   cout << "Friday";
  //   break;
  // case 7:
  //   cout << "Saturday";
  //   break;
  // default:
  //   cout << "Invalid";
  //   break;
  // }

  // arrays

  // int array[5];

  // cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4];

  // array[2] += 2;

  // cout << array[2];

  // arrays are stored in the consecutive(2nd element in array is stored after
  // first element) memory address but we can't be sure where the first one is
  // stored(randomized)

  // 2D arrays

  // int array[2][3];

  // array[1][2] = 30;
  // cout << array[1][2];

  // strings

  // string name = "Prerana";

  // int len = name.size();
  // name[len-1] = 'y';

  // // cout << name[2];
  // cout << name;

  // loops

  // for (int i = 0; i <= 5; i++) {
  //   cout << "Prerana\n";
  // }

  // int a=1;
  // while (a <= 10) {
  //   cout << "Nawar\n";
  //   a = a + 1;
  // };
  // cout << a;

  // int b=10;
  // do{
  //   cout << "aaradhya\n";
  //   b++;
  // }while(b<=5);
  // cout << b;

  // functions

  // int result = sum(2,3);
  // cout << result;

  // int maximum = maxx(5,6);
  // cout << maximum;

  // every function with a return statement must have a return statement

  // pass by value & reference

  // pass by value - passes a copy
  // int num = 10;

  // doSomething(num);
  // cout << num << endl;

  // string name = "Prerana";
  // doSomethingWStr(name);
  // cout << name << endl;

  // pass by reference - passes the original value
  // int num = 10;

  // doSomething(num);
  // cout << num << endl;

  // string name = "Prerana";
  // doSomethingWStr(name);
  // cout << name << endl;

  // input & output of array with for loop
  // int arr[5];
  // for (int i = 1; i < 6; i++) {
  //   cin >> arr[i];
  // }

  // for (int i = 1; i < 6; i++) {
  //   cout << arr[i] << " ";
  // }

  // pass by reference for arrays

  int arr[5];
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  }

  doSomethingWArr(arr);
  cout << "Value inside int main: " << arr[0] << endl;
  // arrays will always go with reference but apart from arrays everthing else will be pass by value such as vectors, strings, etc.

  return 0;
}
