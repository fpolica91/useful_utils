#include <bits/stdc++.h>
#include <iostream>
#include "height.cpp"
using namespace std;

/**
  diameter is the longest path between two end nodes
  */
void diameter(Node *root, int &result){
  if(!root) return;
  int left_height = height_of_tree(root->left);
  int right_height = height_of_tree(root->right);
  result = max(result, 1 + left_height + right_height);
  diameter(root->left, result);
  diameter(root->right, result);
}