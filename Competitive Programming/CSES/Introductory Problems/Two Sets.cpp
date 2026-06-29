#include <bits/stdc++.h>

using ll = long long;
#define nl "\n"
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    ll n;
    cin >> n;

    if ((n * (n + 1) / 2) % 2 != 0) cout << "NO" << nl;
    else {
        cout << "YES" << nl;
        if (n % 2 == 0) {
            int half = n / 2;
            cout << half << nl;
            for (int i = 0; i < half; ++i) {
                cout << i + 1 << " " <<  n - i << " ";
                if (i == half / 2  - 1) cout << nl << half << nl;
            }
            cout << nl;
        }
        else {
        int half = (n / 2 + 1);
        int difference = half / 2;
        cout << half << nl;
        for (int i = 0; i < half - 1; ++i) {
            if (i == half / 2 - 1) {
                cout << i + 1 << " " <<  half << " ";
            }
            else {
                cout << i + 1 << " " <<  n - i << " ";
            }
            if (i == half / 2  - 1) cout << nl << half - 1 << nl;
        }
        cout << half + difference << nl;

    }}


    return 0;
}