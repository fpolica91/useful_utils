#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
  sort(arr, arr + n);
  int sm = arr[0];
  int lg = arr[n - 1];
  int diff = lg - sm;
  for (int i = 1; i < n; i++) {
    if (arr[i] - k < 0)
      continue;
    sm = min(arr[0] + k, arr[i] - k);
    lg = max(arr[i - 1] + k, arr[n - 1] - k);
    diff = min(diff, lg - sm);
  }
  return diff;
}