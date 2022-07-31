#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// stacks are First In Last Out LIFO
/*
  STL:
  stack<int> s
  s.empty();
  top of stack peek
  s.top();
  s.push();
  s.pop();
  s.size();
*/

void stack_stl() {
  stack<int> s;
  vector<int> nums = {1, 2, 3, 4, 5, 6};
  for (auto x : nums) {
    s.push(x);
  }
  while (!s.empty()) {
    cout << s.top() << " ";
    s.pop();
  }
}