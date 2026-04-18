#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nl "\n"

int t;

void get_factors(int n) {

    int a = 0, b = 0, c = 0;

    bool quit = false;
    int i = 2;
    while (i <= sqrt(n)) {
        if (n % i == 0) {
            a = i; // a is the smallest factor
            int remaining = n / i;
            int j = a + 1; //This because j couldn't be smaller than a mindblowing!!!!1
            while (j <= sqrt(remaining)) {
                if (remaining % j == 0) {
                    b = j;
                    c = remaining / j;
                    quit = true;
                    break;
                }
                j++;
            }
        }
        if (quit) break;
        i++;
    }

    if (a >= 2 && (b >= 2 && b != a) && (c >= 2 && c!= b && c!=a)) {
        cout << "YES" << nl << a << " " << b << " " << c << nl;
    }
    else {
        cout << "NO" << nl;
    }
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL);

    cin >> t;

    // Find distinct a, b, c such that 2 <= a,b,c and a*b*c = n

    for (int i = 0; i<t; i++) {
        int n;
        cin >> n;
        get_factors(n);
    }

    return 0;
}