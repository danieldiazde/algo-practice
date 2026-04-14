#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define nl "\n"

ll get_palindromes(string S) {
    if (S == "0" || S == "") return 0;
    
    ll palindromes = 0;
    int len = S.size();

    // 1. Smaller lengths
    for (int i = 1; i < len; i++) {
        ll temp = 9;
        
        for (int j = 0; j < (i - 1) / 2; j++) {
            temp *= 10;
        }
        palindromes += temp;
    }

    // 2. Count palindromes of same length by using the unique left half
    int left_half_len = (len + 2 - 1) / 2;

    string left_string = S.substr(0, left_half_len);
    ll left_num = stoll(left_string); // Fixed typo: left_str -> left_string

    ll minimum_left = 1;
    for (int i = 0; i < left_half_len - 1; i++) {
        minimum_left *= 10;
    }

    palindromes += (left_num - minimum_left);

    // 3. The Mirror Check
    string mirrored = left_string;

    for (int i = len / 2 - 1; i >= 0; i--) {
        mirrored += left_string[i]; // Fixed typo: left_str -> left_string
    }
    
    if (mirrored <= S) {
        palindromes++;
    }

    return palindromes;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        ll l, r; 
        cin >> l >> r; // Read the bounds
        
        // Convert to strings for the function
        string str_r = to_string(r);
        string str_l_minus_1 = to_string(l - 1);
        
        // Calculate f(r) - f(l-1)
        ll ans = get_palindromes(str_r) - get_palindromes(str_l_minus_1);
        cout << ans << nl;
    }

    return 0;
}