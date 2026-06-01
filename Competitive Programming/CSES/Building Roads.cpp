#include <bits/stdc++.h>

using namespace std;

int n, m, k = 0;
vector<vector<int>> adj;
vector<bool> visited;
vector<int> roads;

//Undirected Graph

int main() {

    ios_base::sync_with_stdio(false);  cin.tie(NULL);

    cin >> n >> m;

    adj.resize(n + 1);
    visited.resize(n + 1);
    fill(visited.begin(), visited.end(), false);

    //Build adjency list
    for (int i = 0; i < m ; i++) {
        int a,b;
        cin >> a>> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    for (int i = 1; i<=n; i++) {
        if (visited[i]) continue;
        roads.push_back(i);

        queue<int> q;
        q.push(i);
        visited[i] = true;
        
        while (!q.empty()){
            int node = q.front(); q.pop();
            for (int neighbour: adj[node]) {
                if (!visited[neighbour]) {
                    visited[neighbour] = true;
                    q.push(neighbour);
                }
            }
        }
    }

    cout << roads.size() - 1;
    if (roads.size() >= 2) {
        for (int i = 1; i < roads.size() ; i++) {
            cout << "\n"  << roads[i]  - 1 << " " << roads[i] << "\n";
        }
    }

    
    




    return 0;
}