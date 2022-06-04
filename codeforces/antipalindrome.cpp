// Codeforces - A. Antipalindrome
// author: alexandrecorlet

#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string s, int l, int r) {
    bool is_palindrome = true;
    for (int i = l; i < r; i++) {
        if (s[i] != s[r - i])
            is_palindrome = false;
    }
    return is_palindrome;
}

int32_t main() {

    string s;
    cin >> s; 

    int n = s.size(), best = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int maxi = max(i, j), mini = min(i, j);
            if (!is_palindrome(s, mini, maxi))
                best = max(best, maxi - mini + 1);
        }
    }

    cout << best << '\n';

    return 0;

}
