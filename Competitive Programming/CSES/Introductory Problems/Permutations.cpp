#include "bits/stdc++.h"
#define nl "\n"
using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;

    if (n == 1) cout << 1 << nl;
    else if (n == 2 || n == 3) cout << "NO SOLUTION" << nl;

    else {
    

    int middle = (n + 2 - 1) / 2;
    int copy_of_n = n;
    int oper = middle - 1;

    bool turn = true;
    bool internal_turn = true;
    int count = 0;

    while (count != n) {
        count++;
        if (count > 1) cout << " ";
        if (turn) {
            cout << middle;
            if (internal_turn) {
                middle -= oper;
            }
            else {
                middle += oper;
            }
            oper = abs(oper) - 1;
            internal_turn = !internal_turn;
        }
        else {
            cout << copy_of_n;
            copy_of_n--;
        }
        turn = !turn;
    }
    cout << nl;
}
    return 0;
}