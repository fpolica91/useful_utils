#include <bits/stdc++.h>
#include <iostream>
using namespace std;

vector<int> next_greatest(vector<int> input) {
  int n = input.size();
  vector<int> ans(n);
  ans[n - 1] = -1;
  stack<int> s;
  for (int i = n - 1; i >= 0; i--) {
    while (!s.empty() and s.top() > input[i]) {
      s.pop();
    }
    if (!s.empty()) {
      ans[i] = -1;
    } else {
      ans[i] = s.top();
    }
    s.push(input[i]);
  }

  return ans;
}
