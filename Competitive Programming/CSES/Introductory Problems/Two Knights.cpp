#include <bits/stdc++.h>

using ll = long long;
#define nl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;

    for (ll i = 1; i<=n; ++i) {
        ll total = (i * i) * (i * i - 1) / 2; //n^2 choose 2
        ll invalid = 0;
        if (i >= 3) invalid = 4 * (i - 3 + 1) * (i - 2 + 1);
        cout << total - invalid << nl;
    }



    return 0;
}