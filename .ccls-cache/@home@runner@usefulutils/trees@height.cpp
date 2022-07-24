#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *left;
  Node *right;
  Node(int val) {
    data = val;
    left = NULL;
    right = NULL;
  }
};

/**
  this function finds the depth of a binary tree
      1
     /  \
    /    \
   2      3
           \
            \
             4
  this will return the depth minus the root node
  */
unordered_map<Node *, int> memo;
int height_of_tree(Node *root) {
  if (!root)
    return 0;
  if (memo.find(root) != memo.end()) {
    return memo[root];
  }

  int height = 1 + max(height_of_tree(root->left), height_of_tree(root->right));
  memo[root] = height;
  return height;
}
