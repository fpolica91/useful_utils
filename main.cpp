// Example C++17 program using fold expressions copied from:
// https://www.modernescpp.com/index.php/cpp17-core
//
// foldExpressionAll.cpp

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

template <typename... Args> bool all(Args... args) { return (... && args); }

int main() { return 0; }