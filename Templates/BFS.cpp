#include <bits/stdc++.h>
using namespace std;

void BFS(int node, vector<vector<int>>& adj, int n) {

    vector<bool> visited(n + 1, false);
    visited[node] = true;
    queue<int> q;
    q.push(node);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (int neighbour : adj[current]) {
            if (!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour); 
            }
        }
    }
}

int main() {
    return 0;
}