#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<bool> visited(n + 1, false);
    int ans = 0;

    for (int i = 1; i <= n; i++) {
        if (visited[i]) continue;

        // BFS/DFS to collect the component
        queue<int> q;
        q.push(i);
        visited[i] = true;
        bool allDeg2 = true;
        int compSize = 0;

        while (!q.empty()) {
            int node = q.front(); q.pop();
            compSize++;
            if (adj[node].size() != 2) allDeg2 = false;
            for (int nb : adj[node]) {
                if (!visited[nb]) {
                    visited[nb] = true;
                    q.push(nb);
                }
            }
        }

        if (allDeg2 && compSize >= 3) ans++;
    }

    cout << ans << "\n";
    return 0;
}