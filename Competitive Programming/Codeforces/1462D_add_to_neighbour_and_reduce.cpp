#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl "\n"

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> responses;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        ll S = accumulate(a.begin(), a.end(), 0);
        int number_of_operations = n - 1; //This is the minimum number of operations in the worst case

        //This works on contiguous chunks, so we want to split the array into k continguous chunks 
        // This is where the sum of the chuk equal x, that way S = k * x. So x  = S / k

        bool success = false;
        for (int k = n; k >= 1; k--) {
            if (S % k != 0) continue;

            int x = S / k;

            success = true;
            int sum = 0;
            for (int i = 0; i < n; i++) {
                sum += a[i];
                if (sum > x) {
                    success = false;
                    break;
                }

                else if (sum == x) sum = 0;
            }

            if (success) {
                number_of_operations = n - k;
                break;
            }

        }

        responses.push_back(number_of_operations);

    }

    for (int response: responses) {
        cout << response << nl;
    }

    return 0;
}