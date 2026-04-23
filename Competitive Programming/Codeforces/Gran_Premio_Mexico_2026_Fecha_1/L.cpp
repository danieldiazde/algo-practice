#include <bits/stdc++.h>

using ll = long long;
#define nl "\n"
using namespace std;


void legenday_sort(int k, vector<int>& permutation) {
    
    

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;

    vector<int> permutation(n);

    for (int i = 0; i<n; ++i) {
        cin >> permutation[i];
    }


    //Given the permutation thingies, we need to find the minimum times we need to swap elements to sort the array
    while(q--) {
        int t;
        cin >> t;

        if (t == 1) {
            int i;
            cin >> i;
            swap(permutation[i], permutation[i + 1]);
        }
        else {
            int k;
            cin >> k;
            legendary_sort(k, permutation);
        }

    }


    return 0;
}