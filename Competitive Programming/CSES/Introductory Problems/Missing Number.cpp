#include <bits/stdc++.h>

using namespace std;
#define nl "\n"
using ll = long long;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;
    vector<bool> arr(n + 1, false);

    for (int i = 0; i < n - 1; ++i) {
        int num;
        cin >> num;
        arr[num] = true;
    }
 
    for (int i = 1; i < n + 1; ++i) {
        if (arr[i] == false) cout << i;
    }

    cout << nl;

    return 0;
}