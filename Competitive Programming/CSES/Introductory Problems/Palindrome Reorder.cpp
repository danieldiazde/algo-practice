#include "bits/stdc++.h"
#define nl "\n"
using ll = long long;
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string n;
    cin >> n;
    bool flag = false;
    bool no_solution = false;
    map<char, int> freq;
    string output_string = "";
    char special_char = '\0';

    for (auto x: n) {
        freq[x]++;
    }

    for (auto it = freq.begin(); it != freq.end(); ++it) {
        if (it->second % 2 != 0) {
            if (!flag)  {
                flag = !flag;
                special_char = it->first;
                freq[it->first]--;
            }
            else {
                cout << "NO SOLUTION" << nl;
                no_solution = true;
                break;
            }
        } 
        output_string.append(string(it->second / 2, it->first));
        freq[it->first] -= it->second / 2;
    }

    if (special_char != '\0' && !no_solution) {
        output_string.push_back(special_char);
    }

    if (!no_solution) {
    for (auto it = freq.rbegin(); it != freq.rend(); ++it) {
        output_string.append(string(it->second, it->first));
    }
    cout << output_string << nl;}

    return 0;
}