#include <bits/stdc++.h>

#define nl "\n"
using ll = long long;

using namespace std;


int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> arr(n);
    unordered_map<int, int> best_seen;
    int max_length = 0;
    int max_value = 0;


    for (int i = 0; i< n; ++i) {
        int num;
        cin >> num;
        arr[i] = num;
        if (best_seen.count(num - 1)) {
            best_seen[num] = best_seen[num - 1] + 1;

        }
        else {
            best_seen[num] = 1;
        }

        if (max_length <= best_seen[num])  {
                max_length = best_seen[num];
                max_value = num;
            }
    }

    vector<int> ans;
    int current = max_value - max_length + 1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == current) {
            ans.push_back(i);
            current++;
            
        }
    }


    cout << max_length << nl;
    for (int i = 0; i < (int)ans.size(); ++i) {
        cout << ans[i] + 1;
        if (i  + 1 < (int)ans.size()) cout << " ";
    }
    cout << nl;

    return 0;
}