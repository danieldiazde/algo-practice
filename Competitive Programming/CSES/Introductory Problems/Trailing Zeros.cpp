#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nl "\n"

ll trailing_zeros(int x) {
    ll ans = 0;

    while ( x > 0) {
        x /= 5;
        ans += x;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n; 
    cin >> n;
    cout << trailing_zeros(n) << nl;

    return 0;
}