#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// this can be resized according to size of graph
vector<int> visited(100);

void dfs(vector<vector<int>> adj, int node) {
  if (visited[node])
    return;
  for (auto neighbor : adj[node]) {
    dfs(adj, neighbor);
  }
}