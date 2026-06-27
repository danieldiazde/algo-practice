#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll ans = 0;
        ll cost = 1; 
        while (cost <= n) {
            ll can_take = min(k, n / cost);
            ans += can_take;
            n -= can_take * cost;
            cost *= 2;
        }
        cout << ans << '\n';
    }
    return 0;
}