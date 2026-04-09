#include <bits/stdc++.h>
#define ll long long

int n, m, ans = 0;
vector<int> cats;
vector<vector<int>> adj;

//Consecutive is to keep track of the consecutive cats
void dfs(int node, int parent, int consecutive) {
    //If the node we are has a cat, we update consecutive
    if (cats[node] == 1) consecutive++;
    else consecutive = 0;
    //If it doesn't have a cat then we restart it, wouldn't be consecutive

    if (consecutive > m)  return; //If it overflows m we there is too many cats, we restart at another path

    bool isLeaf = true;
    for (int child : adj[node]) {
        if (child == parent) continue; 
        isLeaf = false; //Since the loop had the chance to start, then it obviously does have a child and is not a leaf
        dfs(child, node, consecutive);  
        }
     //In here is okay because if the for loop only has a parent, then it automatically ends wihtout updating and calls below
    if (isLeaf) ans++;
    }
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> n >> m;

    cats.resize(n+1);
    //This is actually an adjancy list
    //We only store the connections between the nodes and the index tells us the place
    adj.resize(n+1);

    for (int i = 1; i <= n; i++ ) {
        int x; 
        cin >> x;
        cats[i] = x;
    }

    for (int i = 0; i < n - 1 ; i++) {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    //We start at node 1 because that is where the root is indexed at
    dfs(1,-1,0);

    cout << ans;

    
    return 0;
}