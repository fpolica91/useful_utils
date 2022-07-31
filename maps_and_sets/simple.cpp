#include <bits/stdc++.h>
#include <iostream>
using namespace std;

set<int> s;
unordered_set<int> us;
// multiple instances of the same element;
multiset<int> ms;

// s.find()
// s.count()
// s.empty()
// s.insert()
// s.begin(); -> first elem;
// s.upper_bound(s.begin(), s.end()) s.lower_bound()
// s.erase(elem | *itr | <start, end>);
// s.clear() -> erase all

void ss() {
  vector<int> nums = {1, 2, 3, 4};
  for (auto x : nums) {
    s.insert(x);
  }

  // iterate over set
  set<int>::iterator itr;
  for (itr = s.begin(); itr != s.end(); itr++) {
    // dereference pointer
    cout << *itr << " ";
  }
  // iterate over map

  unordered_map<int, int> symbolTable;

  unordered_map<int, int>::iterator it;
  for (it = symbolTable.begin(); it != symbolTable.end(); it++) {
  }

  for (auto const &[key, val] : symbolTable) {
    std::cout << key        // string (key)
              << ':' << val // string's value
              << std::endl;
  }
}
