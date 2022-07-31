#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> next_greatest(vector<int> input) {
  int n = input.size();
  vector<int> ans(n);
  ans[n - 1] = -1;
  stack<int> s;
  for (int i = n - 1; i >= 0; i--) {
    /*
      we use a stack because of LIFO, since we are looking
      for the next_greatest we want access to latest elements
      pushed first.
    */
    // pop every elem smaller than current
    while (!s.empty() and s.top() >= input[i]) {
      s.pop();
    }
    // if the stack is empty there are no elements greater than     current
    if (!s.empty()) {
      ans[i] = -1;
    } else {
      ans[i] = s.top();
    }
    // push current as potential answer
    s.push(input[i]);
  }

  return ans;
}
