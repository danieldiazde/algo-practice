#include <bits/stdc++.h>

#define nl "\n"
using ll = long long;
using namespace std;


void traverse(string& s, vector<int>& a) {

    vector<int> b(a.size(), 1);

    vector<int> L(b.size(), 1);
    vector<int> R(b.size(), 1);

    //Left sweep
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '<') {
            L[i+1] = L[i] + 1;
        }
        else if (s[i] == '>') {
            L[i+1] = 1;
        }
        else {
            L[i + 1] = L[i];
        }
    }

    //Right sweep
    for (int i = (int)s.size() - 1; i >= 0; --i) {
        if (s[i] == '>') {
            R[i] = R[i + 1] + 1;
        }
        else if (s[i] == '<') {
            R[i] = 1;
        }
        else {
            R[i] = R[i + 1];
        }
    }

    // We don't have to take into account the weights in this problem because this is the minimal solution, no other way to optimize
    ll cost = 0;
    for (int i = 0; i < (int)b.size(); ++i) {
        b[i] = max(L[i], R[i]);
        cost += ll(a[i]) * b[i];
    }

    cout << cost << nl;
    for (int i = 0; i < int(b.size()); ++i) {
        cout << b[i];
        if (i + 1 < (int)b.size()) cout << ' ';    }
    
    cout << nl;

}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    string s = "";
    cin >> s;

    //This is a greedy problem
    //Your cost function to minimize is the sum of a*b, not only b because you need to take into account that weight a presents
    //Whenever you encounter a =, you divide the subgroup, like 
    // < = > > < turns into {1} < {3,3} > {2} > {1} < {2}

    traverse(s, a);
    return 0;
}