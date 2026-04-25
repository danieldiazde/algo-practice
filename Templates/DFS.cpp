#include <bits/stdc++.h>
using namespace std;

void DFS_Iterative(int start_node, vector<vector<int>>& adj, int n) {
    vector<bool> visited(n + 1, false);
    stack<int> s;
    s.push(start_node);

    while (!s.empty()) {
        int current = s.top();
        s.pop();

        if (!visited[current]) {
            visited[current] = true;
            
            for (int neighbour : adj[current]) {
                if (!visited[neighbour]) {
                    s.push(neighbour); 
                }
            }
        }
    }
}

void DFS_DP(int node, vector<vector<int>>& adj) {
    vector<bool> visited(n + 1, false);
    visited[node] = true;
    
}

int main() {
    return 0;
}