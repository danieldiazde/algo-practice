#include <bits/stdc++.h>

#define ll long long
#define nl "\n"

using namespace std;

int h, m, last_cost;


int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> h >> m;

    int total_time = h*60 + m;
    int n;
    cin >> n;

    ll cost = 0;

    for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;

    if (total_time == 0) continue;

    if (total_time > x) {
        cost += 1LL * x * y;
        total_time -= x;
    } else {
        cost += 1LL * total_time * y;
        total_time = 0;
    }
}

    //if (total_time > 0) cost += total_time * last_cost;

    cout << cost << nl;

    return 0;
}