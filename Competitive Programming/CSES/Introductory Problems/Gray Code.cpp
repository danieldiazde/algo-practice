#include <bits/stdc++.h>

#define nl "\n"
using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;
    
    for (int i = 0; i < (1 << n); ++i) {
        int g = i ^ (i >> 1);
        
        for (int bit = n - 1; bit >= 0; bit--) {
            cout << ((g >> bit) & 1);
        }
        cout << nl;
    }

    return 0;
}