#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*
  queue
  back        front
  [7|6|5||4|3|2|1]
*/

/*
  deque: can take out or insert from front or back
  back        front
  [7|6|5||4|3|2|1]
  front       back
*/

void queue_stl() {
  queue<int> q;
  vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
  for (auto x : nums)
    q.push(x);

  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop();
  }

  deque<int> dq;
  for (auto x : nums)
    // dq.push_front()
    dq.push_back(x);
  while(!dq.empty()){
    cout << "Fr"
  }
}