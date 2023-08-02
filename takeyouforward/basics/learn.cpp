// #include <iostream>
// #include <string>
#include<bits/stdc++.h>
using namespace std;

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

  int day;
  cin >> day;

  switch (day) {
  case 1:
    cout << "Sunday";
    break;
  case 2:
    cout << "Monday";
    break;
  case 3:
    cout << "Tuesday";
    break;
  case 4:
    cout << "Wednesday";
    break;
  case 5:
    cout << "Thursday";
    break;
  case 6:
    cout << "Friday";
    break;
  case 7:
    cout << "Saturday";
    break;
  default:
    cout << "Invalid";
    break;
  }

  return 0;
}