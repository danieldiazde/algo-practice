#include <bits/stdc++.h>

#define ll long long

using namespace std;

int n, m;
ll response = 0;
vector<int> points;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> m;

    vector<string> answers(m, "");

    points.resize(m);

    for (int i = 0; i < n; i++) {
        string x;
        cin >> x;
        for (int j = 0; j < m; j++) {
            answers[j] += x[j];
        }
    }

    for (int i = 0; i < m; i++) {
        cin >> points[i];
    }

    for (int i = 0; i < m; i++) {

        int freq[4] = {0};   // A B C D
        int best_count = 0;

        for (char c : answers[i]) {
            freq[c - 'A']++; // By 
        }

        for (int j = 0; j < 4; j++) {
            best_count = max(best_count, freq[j]);
        }

        response += 1LL * best_count * points[i];
    }

    cout << response << "\n";
}