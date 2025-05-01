#include <bits/stdc++.h>
// #include <math.h>
// #include <string.h>

using namespace std;

void print() { cout << "Hello Pre"; }

int sum(int a, int b) { return a + b; }

void explainPair() {
  pair<int, int> p = {1, 3};
  cout << p.first << " " << p.second;
  cout << endl;
  pair<int, int> a;
  pair<int, pair<int, int>> c;
  pair<int, int> arr1[10];
  pair<int, pair<int, int>> b = {1, {3, 4}};
  cout << b.first << " " << b.second.second << " " << b.second.first;
  cout << endl;
  pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
  cout << arr[1].second;
  cout << endl;
  cout << arr[2].first;
  cout << endl;
  cout << arr[2].second;
}

// vector is a dynamic array
// vector singly linked list is used to maintain the vector
void explainVector() {
  vector<int> v;
  v.push_back(1);
  v.emplace_back(2);

  vector<pair<int, int>> vec;
  vec.push_back({1, 2});
  vec.emplace_back(1, 2);

  vector<int> v1(5, 100);
  vector<int> v2(5);
  vector<int> v3(5, 20);
  vector<int> v4(v3);
  vector<int> v5 = {2, 3, 5, 6, 7};

  vector<int>::iterator it = v5.begin();
  it++;
  cout << *(it) << " ";
  vector<int>::iterator it1 = v5.end();
  it1--;
  cout << *(it1) << " ";
  vector<int>::reverse_iterator it2 = v5.rend();
  it2--;
  cout << *(it2) << " ";
  vector<int>::reverse_iterator it3 = v5.rbegin();
  cout << *(it3) << " ";

  for (vector<int>::iterator it = v5.begin(); it != v5.end(); it++) {
    cout << *(it) << " ";
  }
  cout << endl;

  for (auto it = v5.begin(); it != v5.end(); it++) {
    cout << *(it) << " ";
  }
  cout << endl;

  for (auto it : v5) {
    cout << it << " ";
  }
  cout << endl;

  vector<int> v6 = {10, 20, 30, 40};
  v6.erase(v6.begin() + 1);
  for (auto it : v6) {
    cout << it << " ";
  }
  cout << endl;
  v6.erase(v6.begin() + 2, v6.begin() + 4);
  for (auto it : v6) {
    cout << it << " ";
  }
  cout << endl;

  vector<int> v7 = {10, 20, 30, 40};
  v7.insert(v7.begin(), 300);
  for (auto it : v7) {
    cout << it << " ";
  }
  cout << endl;

  vector<int> v8 = {10, 20, 30, 40};
  v8.insert(v8.begin(), 2, 10);
  for (auto it : v8)
    cout << it << " ";
  cout << endl;

  vector<int> copy(2, 50);
  v8.insert(v8.begin(), copy.begin(), copy.end());
  for (auto it : v8)
    cout << it << " ";
  cout << endl;

  vector<int> v9 = {10, 20};
  vector<int> v10 = {30, 40};
  v9.swap(v10);

  for (auto it : v9)
    cout << it << " ";
  cout << endl;

  for (auto it : v10)
    cout << it << " ";

  cout << endl;

  // size
  cout << v9.size();
  cout << endl;

  // remove last element
  v9.pop_back();
  cout << endl;

  for (auto it : v9)
    cout << it << " ";

  cout << endl;

  // clear
  v10.clear();

  // empty
  if (v10.empty()) {
    cout << "v10 is empty";
  } else {
    cout << "v10 is not empty";
  }
}

// doubly linked list is used to maintain the list
void explainList() {
  list<int> ls;

  ls.push_back(2);
  ls.emplace_back(4);
  ls.push_front(5);
  ls.emplace_front(6);
  for (auto it : ls) {
    cout << it << " ";
  }
  cout << endl;

  // rest functions are same as vector
  // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque() {
  deque<int> dq;
  dq.push_back(1);
  dq.emplace_back(2);
  dq.push_front(4);
  dq.emplace_front(3);
  for (auto it : dq) {
    cout << it << " ";
  }
  cout << endl;

  dq.pop_back();
  for (auto it : dq)
    cout << it << " ";
  cout << endl;

  dq.pop_front();
  for (auto it : dq)
    cout << it << " ";
  cout << endl;

  // rest functions same as vector
  // begin, end, rbegin, rend, size, swap, clear, insert
}

// stack is a lifo data structure
void explainStack() {
  stack<int> st;
  st.push(1);
  st.push(2);
  st.push(3);
  st.push(3);
  st.push(3);
  st.emplace(5);
  cout << st.top();
  st.pop();
  cout << st.top();
  cout << st.size();
  cout << st.empty();
  stack<int> st1, st2;
  st1.swap(st2);
  cout << st1.top();
}

// queue is a fifo data structure
void explainQueue() {
  queue<int> q;
  q.push(1);
  q.push(2);
  q.emplace(4);
  q.back() += 5;
  cout << q.back();
  cout << q.front();
  q.pop();
  cout << q.front();
  cout << q.size();
  cout << q.empty();
  queue<int> q1, q2;
  q1.swap(q2);
  cout << q1.front();
}

// priority queue has tree data structure
void explainPQ() {
  // max heap - maximum element at the top
  priority_queue<int> pq;
  pq.push(5);
  pq.push(2);
  pq.push(8);
  pq.emplace(10);
  cout << pq.top();
  pq.pop();
  cout << pq.top();
  cout << pq.empty();
  cout << pq.size();
  priority_queue<int> pq1, pq2;
  pq1.swap(pq2);
  cout << pq1.top();
  priority_queue<int, vector<int>, greater<int>> pqMin;
  pqMin.push(5);

  // min heap - minimum element at the top
  priority_queue<int, vector<int>, greater<int>> pqMin1;
  pqMin1.push(5);
  pqMin1.push(1);
  pqMin1.push(0);
  pqMin1.emplace(4);
  cout << pqMin1.top();
  pqMin1.pop();
  cout << pqMin1.top();
}

// time complexity
// push - log(n)
// pop - log(n)
// top - O(1)

// set is a data structure that stores unique elements in sorted order
// set is implemented using balanced BST
// set - everything is in log(n) time complexity
void explainSet() {
  set<int> st;
  st.insert(1);
  st.emplace(2);
  st.insert(2);
  st.insert(4);
  st.insert(3);

  auto it = st.find(3);
  auto it1 = st.find(6);
  if (it1 != st.end()) {
    cout << "found";
  } else {
    cout << "not found";
  }

  st.insert(5);
  auto it2 = st.lower_bound(2);
  auto it3 = st.upper_bound(3);
  auto it4 = st.upper_bound(4);
  cout << *it2 << " " << *it3 << " " << *it4;
  cout << endl;

  // find
  auto it8 = st.find(3);
  cout << *it8;
  cout << endl;

  // auto it5 = st.erase(5);
  // cout << *it5;
  // cout << endl;

  auto it6 = st.erase(it2, it4);
  cout << *it6;
  cout << endl;

  int cnt = st.count(1);
  cout << cnt;
  cout << endl;

  auto it7 = st.find(3);
  st.erase(it7);
  cout << *it7;
  cout << endl;
}

// multiset is a data structure that stores duplicate elements in sorted order
// multiset is implemented using balanced BST
// multiset - everything is in log(n) time complexity
void explainMultiSet() {
  multiset<int> ms;
  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  ms.insert(2);
  ms.insert(3);
  ms.erase(1);

  int cnt = ms.count(1);
  cout << cnt;
  cout << endl;

  auto it = ms.find(1);
  ms.erase(it);
  cout << *it;
  cout << endl;

  auto it1 = ms.find(3);
  auto it2 = ms.find(2);
  ms.erase(it2, it1);
  cout << *it1 << " " << *it2;
  cout << endl;
  // rest functions same as set
}

// all operations are simlar to set but lower bound and upper bound do not work
// all operations are O(1) time complexity
// unordered set is a data structure that stores unique elements in unsorted
void explainUnorderedSet() {
  unordered_set<int> st;
  st.insert(1);
  st.insert(2);
  st.insert(3);

  auto it = st.find(2);
  cout << *it;

  int cnt = st.count(3);
  cout << cnt;
}

// map is a data structure that stores key value pairs in sorted order
// map is implemented using balanced BST
// map - everything is in log(n) time complexity
// keys are unique
void explainMap() {
  map<int, int> mpp;
  mpp[1] = 2;
  mpp.emplace(3, 1);
  mpp.insert({2, 4});
  mpp[5] = 10;
  for (auto it : mpp) {
    cout << it.first << " " << it.second << endl;
  }
  cout << endl;
  for (auto it = mpp.begin(); it != mpp.end(); it++) {
    cout << it->first << " " << it->second << endl;
  }
  cout << endl;
  auto it = mpp.find(3);
  cout << it->second;

  map<int, pair<int, int>> mpp1;
  mpp1[1] = {2, 3};
  mpp1.emplace(2, make_pair(3, 4));
  mpp1.insert({3, {4, 5}});
  for (auto it : mpp1) {
    cout << it.first << " " << it.second.first << " " << it.second.second
         << endl;
  }
  auto it1 = mpp1.find(2);
  cout << it1->second.first << " " << it1->second.second;
  cout << endl;

  auto it2 = mpp1.find(2);
  mpp1.erase(it2);
  cout << it2->second.first << " " << it2->second.second;
  cout << endl;

  auto it3 = mpp1.find(1);
  auto it4 = mpp1.find(3);
  mpp1.erase(it3, it4);
  cout << it3->second.first << " " << it3->second.second;
  cout << endl;

  // lower bound and upper bound work in the same way as set and multiset
  // count works in the same way as set and multiset
  // size works in the same way as set and multiset
  // empty works in the same way as set and multiset
}

// multimap is a data structure that stores key value pairs in sorted order
// multimap is implemented using balanced BST
// multimap - everything is in log(n) time complexity
// keys are not unique - duplicate keys but in sorted order
void explainMultimap() {
  multimap<int, int> mpp;
  mpp.insert({1, 2});
  mpp.insert({1, 3});
  mpp.insert({1, 4});
}

// unordered map is a data structure that stores key value pairs in unsorted
// unordered map is implemented using hash table
// unordered map - everything is in O(1) time complexity
void explainUnorderedMap() {
  unordered_map<int, int> mpp;
  mpp[1] = 2;
  mpp.emplace(2, 3);
  mpp.insert({3, 4});
  for (auto it : mpp) {
    cout << it.first << " " << it.second << endl;
  }
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second < p2.second)
    return true;
  if (p1.second > p2.second)
    return true;
  if (p1.first > p2.first) {
    return true;
  }
  return false;
}

void explainExtra() {

  // sort(a, a+n);
  // sort(v.begin(), v.end());
  // sort(a+2, a+4);
  // sort(a, a+n, greater<int>);
  // sort(v.begin(), v.end(), greater<int>);

  pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
  // sort it according to second element
  // if second element is same,
  // then sort it according to first element but in descending order

  // sort(a, a+n, comp);
  // {4, 1}, {1, 2}, {2, 1}

  int num = 7;
  int cnt = __builtin_popcount(num);
  cout << cnt;
  // 3

  long long num1 = 165786578687;
  int cnt1 = __builtin_popcountll(num1);
  cout << cnt1;

  string s = "123";
  sort(s.begin(), s.end());
  do {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));
  // 123

  // max element
  // int maxi = *max_element(a, a + n);
  // min element
  // int mini = *min_element(a, a + n);
}

int main() {
  print();
  cout << endl;
  int c = sum(10, 20);
  cout << c;
  cout << endl;
  explainPair();
  cout << endl;
  explainVector();
  cout << endl;
  explainList();
  cout << endl;
  explainDeque();
  cout << endl;
  explainStack();
  cout << endl;
  explainQueue();
  cout << endl;
  explainPQ();
  cout << endl;
  explainSet();
  cout << endl;
  explainMultiSet();
  cout << endl;
  explainUnorderedSet();
  cout << endl;
  explainMap();
  cout << endl;
  explainMultimap();
  cout << endl;
  explainUnorderedMap();
  cout << endl;

  return 0;
}

// c++ stl
// 1. algorithms
// 2. containers
// 3. functions
// 4. iterators
