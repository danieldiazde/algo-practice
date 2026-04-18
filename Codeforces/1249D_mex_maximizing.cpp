#include <bits/stdc++.h>

#define ll long long
#define nl "\n"

using namespace std;

// The MEX of an array is the minimum non negative integer that does not belong to an array, starting from 0
    //Given an x, in one move i can make a += x or a-= x just so a>= 0
    // The jth query gives me an integer y that is appended to a
    // At each point i have to maximize the mex, can even perform multiple operations in one element
    //Operations are discarded after each query

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int q, x;

    cin >> q >> x;

    vector<int> a;
    for (int i = 0; i < q; i++) {
        int y;
        cin >> y;
        a.push_back(y);
    }

    int needed = 0;
    unordered_map<int, int> counts; 

    for (int i = 0; i < q; i++) {
    int value = a[i] % x;

    if (value == needed % x) {
        needed++;
        while (counts[needed % x] > 0) {
            counts[needed % x]--;
            needed++;
        }
    } else {
        counts[value]++;
    }

    cout << needed << "\n";
}


    return 0;
}