#include <bits/stdc++.h>
#include <iostream>
using namespace std;


pair<int, int> firstAndLast(vector<int> &nums, int target){
  int n = nums.size();
  int _first = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
  int _last = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
  if(_first >= n){
    // out of bounds no such elem found
    // elem is greater than all elems in array.
    return make_pair(-1,-1)
  }
  // returning next greater, as elem not found.
  if(nums[_first] != target){
    return make_pair(-1, -1);
  }else{
    // _last points to next greater elem as it is upper bound.
    return make_pair(_first, _last-1);
  }
}