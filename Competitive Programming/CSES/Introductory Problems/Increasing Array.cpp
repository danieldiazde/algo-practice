#include <bits/stdc++.h>

using namespace std;
#define nl "\n"
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;
    int max_seen;
    cin >> max_seen;
    ll sum = 0;

    for (int i = 0; i < n - 1; ++i) {
        int x;
        cin >> x;
        ll diff = max_seen - x;
        if (diff > 0) sum += diff;
        max_seen = max(max_seen, x);
    }

    cout << sum << nl;
    return 0;
}