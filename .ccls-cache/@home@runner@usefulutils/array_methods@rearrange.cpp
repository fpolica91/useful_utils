
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

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