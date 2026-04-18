#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        long long S = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            S += a[i];
        }

        int answer = n - 1; // worst case

        for (int k = n; k >= 1; k--) {
            if (S % k != 0) continue;

            long long target = S / k;
            long long curr = 0;
            int count = 0;
            bool ok = true;

            for (int i = 0; i < n; i++) {
                curr += a[i];
                if (curr == target) {
                    count++;
                    curr = 0;
                } else if (curr > target) {
                    ok = false;
                    break;
                }
            }

            if (ok && count == k) {
                answer = n - k;
                break;
            }
        }

        cout << answer << '\n';
    }

    return 0;
}