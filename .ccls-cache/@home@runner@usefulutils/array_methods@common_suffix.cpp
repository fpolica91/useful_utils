#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/**
  given an array of strings find the common prefixes between in all strings;
*/

string findPrefix(string &s1, string &s2) {
  string common = "";
  int i = 0;
  int j = 0;
  while (i < s1.size() and j < s2.size()) {
    if (s1[i] == s2[j]) {
      common += s1[i];
      i++;
      j++;
    } else {
      break;
    }
  }
  return common;
}

string longestCommonPrefix(string arr[], int N) {
  string ans = arr[0];
  for (int i = 1; i < N; i++) {
    ans = findPrefix(ans, arr[i]);
    if (ans == "") {
      return "-1";
    }
  }
  return ans;
}