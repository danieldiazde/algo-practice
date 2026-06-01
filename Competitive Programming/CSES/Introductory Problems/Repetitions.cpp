#include "bits/stdc++.h"
#define nl "\n"
using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string s;
    cin >> s;

    unordered_map<char, int> hash_table;

    char current_character;
    char prev_character = s[0];
    hash_table[s[0]] += 1;
    int max_value = 1;


    for (int i = 1; i < s.size(); ++i) {
        current_character = s[i];
        hash_table[current_character] += 1;
        if (current_character != prev_character) {
            max_value = max(hash_table[prev_character], max_value);
            hash_table[prev_character] = 0;
        }
        prev_character = current_character;
    }

    max_value = max(max_value, hash_table[prev_character]);

    cout << max_value << nl;



    return 0;
}