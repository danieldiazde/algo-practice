#include <bits/stdc++.h>

#define nl "\n"
using ll = long long;
using namespace std;

void towerOfHanoi(int n, int from, int to, int aux) {
    //It is a recursive problem, from from A to C n after moving n-1 out of the way
    if (n == 1) {
        cout << from << " " << to << nl;
    }
    else {
        
    towerOfHanoi(n-1, from, aux, to);

    cout << from << " " << to << nl;

    towerOfHanoi(n-1, aux, to, from);
    }
    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    int n;
    cin >> n;
    cout << (1<<n) - 1 << nl;
    towerOfHanoi(n, 1, 3, 2); //Aux is the one you dont use
    return 0;
}