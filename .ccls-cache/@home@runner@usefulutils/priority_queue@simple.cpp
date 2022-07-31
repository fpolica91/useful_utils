#include <bits/stdc++.h>
#include <iostream>
using namespace std;

auto cmp = [](int a, int b) { return a > b; };

// max heap sorted largest to smallest.\
// insertion and deletion Ologn
priority_queue<int> pq;
priority_queue<int, vector<int>, greater<int>> mq;
priority_queue<int, vector<int>, decltype(cmp)> pq_cmp(cmp);
// pq.empty();
// pq.size();
// pq.push();
// pq.pop();
// pq.top();
