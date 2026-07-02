#include <bits/stdc++.h>

using ll = long long;
#define nl "\n"
using namespace std;

ll modpow(ll a, ll b, ll MOD) {
    ll answer = 1 % MOD;
    a %= MOD;

    while (b > 0) {

        if (b & 1) {
            answer = (answer * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>=1;

    }
    return answer;
}


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    ll n;
    cin >> n;
    
    const ll MOD = 1000000007LL;

    cout << modpow(2, n, MOD) << nl;

    return 0;
}