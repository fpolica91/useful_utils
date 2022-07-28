#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int findSwapValues(int A[], int n, int B[], int m) {
  int sum_A = 0;
  int sum_B = 0;
  unordered_set<int> st;
  for (int i = 0; i < n; i++) {
    sum_A += A[i];
  }

  for (int i = 0; i < m; i++) {
    sum_B += B[i];
    st.insert(B[i]);
  }

  int diff = (sum_A - sum_B);

  if (diff % 2 == 1)
    return -1;

  diff = diff / 2;

  for (int i = 0; i < n; i++) {
    int search = (A[i] - diff);
    if (st.find(search) != st.end())
      return 1;
  }

  return -1;
}