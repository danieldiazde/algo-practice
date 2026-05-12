#include <bits/stdc++.h>

#define nl "\n"

using namespace std;
using ll = long long;

int n, m, k;
vector<int> arr;
const ll NEG = LLONG_MIN / 4;
const ll UNVISITED = LLONG_MIN;
vector<vector<ll>> dp;

ll solve(int current_position, int remaining_to_choose) {
    if (remaining_to_choose == 0) return 0;

    if (n - current_position < remaining_to_choose * m) {
        return NEG;
    }

    if (dp[current_position][remaining_to_choose] != UNVISITED) {
        return dp[current_position][remaining_to_choose];
    }

    ll skip = solve(current_position + 1, remaining_to_choose);

    ll sum = 0;
    for (int j = current_position; j < current_position + m; ++j) {
        sum += arr[j];
    }

    ll choose = sum + solve(current_position + m, remaining_to_choose - 1);

    return dp[current_position][remaining_to_choose] = max(skip, choose);
}



int main() {


    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    

    cin >> n >> m >> k;
    arr.resize(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    dp.assign(n + 1, vector<ll>(k + 1, UNVISITED));
    

    // We need to find state + transition
    // We need to choode k non-overlaping blocks that assure r1 - l1 + 1 = m
    // At each point we can either choo
    // Total to choose is k

    cout << solve(0, k) << nl;

    return 0;
}