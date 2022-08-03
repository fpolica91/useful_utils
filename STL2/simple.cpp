#include <bits/stdc++.h>
#include <iostream>
using namespace std;


vector<int> nums = {1,2,2,2,2,3,4,6};
binary_search(nums.begin(), nums.end());

// returns first occurence of elem
// if elem not present points to next greater element
// if not present returns last index. returns >= elem
lower_bound(nums.begin(), nums.end(), 2);

// returns number just larger than given number
upper_bound(nums.begin(), nums.end(), 4);