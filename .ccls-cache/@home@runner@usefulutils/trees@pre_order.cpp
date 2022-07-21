#include <bits/stdc++.h>
using namespace std;

class Node {
public:
  int val;
  vector<Node *> children;

  Node() {}

  Node(int _val) { val = _val; }

  Node(int _val, vector<Node *> _children) {
    val = _val;
    children = _children;
  }
};

// return array of preorder traversals
void preorderBuild(Node *root, vector<int> ans) {
  if (root == NULL)
    return;
  cout << root->val << " ->";
  ans.push_back(root->val);
  for (int i = 0; i < root->children.size(); i++) {
    preorderBuild(root->children[i], ans);
  }
}

int main() {
  vector<int> ans;
  Node *root = new Node(1);
  root->children.push_back(new Node(3));
  root->children.push_back(new Node(2));
  root->children.push_back(new Node(4));
  preorderBuild(root, ans);
}