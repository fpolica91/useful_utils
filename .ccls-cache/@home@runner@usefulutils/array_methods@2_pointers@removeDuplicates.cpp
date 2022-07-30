#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// returns index of last non duplicate item
int remove(vector<int> nums) {
  // marks index of last non-duplicate item
  int index = 1;
  for (int i = 1; i < nums.size(); i++) {
    if (nums[index - 1] != nums[i]) {
      nums[index] = nums[i];
      index++;
    }
  }
  return index;
}