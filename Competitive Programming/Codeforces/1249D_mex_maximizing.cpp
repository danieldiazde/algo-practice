#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q, x;
    cin >> q >> x;

    int need = 0;
    vector<int> answers;
    unordered_map<int, int> seen;

    for (int i = 0; i < q; ++i) {
        int y;
        cin >> y;

        seen[y % x]++;

        while (seen[need % x] > 0) {
            seen[need % x]--;
            need++;
        }

        answers.push_back(need);
    }

    for (int a : answers) {
        cout << a << nl;
    }

    return 0;
}