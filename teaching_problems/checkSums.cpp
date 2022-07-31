#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkSumPairs(int arr[], int n, int k, int m){
  if(n % 2 == 1){
    return false;
  }
  map<int, int> hm;
  for(int i = 0; i < n; i++){
    int rem = arr[i] % k;
    hm[rem]++;
  }
  map<int, int>::iterator it;
  for(it = hm.begin(); it != hm.end(); it++){
    int rem = it->first;
    // if the rem forms the target 
    if(2 * rem == m){
      // since 2 times the rem == target
      // there must be an even number of rem elements
      if(hm[rem] % 2 != 0){
        return false;
      }
    }
    else{
      int curr = (m - rem + k) % k;
      // there must be same number of values to form a pair.
      if(hm[curr] != hm[rem]){
        return false;
      }
    }
  }
  return true;
}