#include <bits/stdc++.h>

using ll = long long;
#define nl "\n"
using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int bigger = (a >= b) ? a : b;
        if (bigger == a && (2*a - b) % 3 == 0) {
            if (2 * b < a) cout << "NO" << nl;
            else cout << "YES" << nl;
        }
        else if (bigger == b && (2*b - a) % 3 == 0) {
            if (2 * a < b) cout << "NO" << nl;
            else cout << "YES" << nl;
        }

        else cout << "NO" << nl;
    }

    return 0;
}