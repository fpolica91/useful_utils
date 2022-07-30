#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int longestPeak(vector<int> nums) {
  int i = 1;
  int j = nums.size() - 1;
  int largestPeak = 0;
  while (i < j) {
    // is current number a peak.
    bool isPeak = nums[i] > nums[i - 1] and nums[i] > nums[i + 1];
    if (!isPeak) {
      // if not a peak move to next element
      i += 1;
      continue;
    }
    // how far left does the peak extend
    int left = i - 2;
    while (left >= 0 and nums[left] < nums[left + 1]) {
      left--;
    }
    int right = i + 2;
    while (right < nums.size() and nums[right - 1] > nums[right]) {
      right++;
    }
    int currPeakLength = right - left - 1;
    largestPeak = max(largestPeak, currPeakLength);
    // i becomes the end of the previous peak.
    i = right;
  }
  return largestPeak;
}