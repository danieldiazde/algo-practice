#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        ll y, x;
        cin >> y >> x;

        ll biggest = max(x, y);
        ll initial_value = biggest * biggest;
        ll k;

        if (biggest % 2 == 0) {
            k = initial_value - (x - 1);
            if (biggest == x) k -= (x - y);
        } else {
            k = initial_value - (y - 1);
            if (biggest == y) k -= (y - x);
        }

        cout << k << "\n";
    }

    return 0;
}