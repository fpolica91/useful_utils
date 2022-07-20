// Example C++17 program using fold expressions copied from:
// https://www.modernescpp.com/index.php/cpp17-core
//
// foldExpressionAll.cpp

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

template <typename... Args> bool all(Args... args) { return (... && args); }


/*
  this function takes an array, sorts it and after 
  rearranges it in the following manner 
  a(i), a(n-1), a(i+1), a(n-2) ... a(n)
  this creates a greater difference betwen the adjacent elements
  1, 2, 4, 5 -> 1, 5, 2, 4, 
*/
void rearrangeArray(int arr[], int n) {
  // Sorting the array elements
  sort(arr, arr + n);

  int tempArr[n]; // To store modified array

  // Adding numbers from sorted array to
  // new array accordingly
  int ArrIndex = 0;

  // Traverse from begin and end simultaneously 
  for (int i = 0, j = n - 1; i <= n / 2 || j > n / 2; i++, j--) {
    tempArr[ArrIndex] = arr[i];
    ArrIndex++;
    tempArr[ArrIndex] = arr[j];
    ArrIndex++;
  }

  // Modifying original array
  for (int i = 0; i < n; i++) {
    arr[i] = tempArr[i];
  }
}

int main() {

  std::cout << std::boolalpha;

  std::cout << "all(): " << all() << std::endl;
  std::cout << "all(true): " << all(true) << std::endl;
  std::cout << "all(true, true, true, false): " << all(true, true, true, false)
            << std::endl;

  std::cout << std::endl;
}