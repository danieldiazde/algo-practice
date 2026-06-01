#include <bits/stdc++.h>

using namespace std;
#define nl "\n"
using ll = long long;
ll n;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    cin >> n;

    cout << n;

    while (n != 1) {
        if (n % 2 == 0) {
            n/=2;
            cout << " " << n;
        }
        else {
            n = n*3 +1;
            cout << " " << n;
        }
    }
    cout << nl;

    return 0;
}