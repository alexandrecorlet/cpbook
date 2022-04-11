/*
 * Kattis: Help a PhD Candidate Out!
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>
#define to_int(s) stoi(s)

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        string ans = "skipped";
        size_t i = s.find("+");
        if (i != string::npos) {
            ans = to_string(to_int(s.substr(0, i)) + to_int(s.substr(i+1)));
        }

        cout << ans << '\n';

    }
    return 0;
}
