#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define nl "\n"

size_t length;
vector<int> count_letters(26,0);
vector<string> answer;

void backtrack_string(string current_string, int index) {

    if (current_string.size() == length){
        answer.push_back(current_string);
        return;
    }

    else {
        for (int j = 0; j < 26; ++j) {
            if (count_letters[j] > 0) {
                current_string.push_back('a'+ j);
                count_letters[j]--;
                backtrack_string(current_string, j);
                
                current_string.pop_back();
                count_letters[j]++;
            }
        }
    }
}


int main () {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    string n;
    cin >> n;
    length = n.size();

    vector<ll> factorial(length + 1);
    factorial[0] = 1LL;
    for (int i = 1; i <= length; ++i) {
        factorial[i] = factorial[i - 1] * i;
    }

   
    for (char letter : n) count_letters[letter - 'a']++;

    ll combinations = 1LL;
    for (auto count : count_letters) {
        combinations *= factorial[count];
    }

    cout << factorial[length] / combinations << nl;
    backtrack_string(string{}, 0);
    for (auto s : answer) cout << s << nl;
    return 0;
}