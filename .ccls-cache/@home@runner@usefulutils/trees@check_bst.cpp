#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node{
  int data;
  Node*left;
  Node*right;
  Node(int val){
    data = val;
    left = NULL;
    right = NULL;
  }
};

// every node on left should be less than its parent
// and every node on right should be greater than its parent

bool check_util(Node *root, int low, int high){
  if(!root){
    // base case we've checked every node and it didn't fail at any given point.
    return true;
  }
  if(root->data < low or root->data > high){
    return false;
  }
  // check parent is greater than left;
  return check_util(root->left, low, root->data)
         // check parent smaller than right
         and check_util(root->right, root->data, high);
}
bool check_bst(Node* root){
  
  return check_util(root, INT_MIN, INT_MAX);
}