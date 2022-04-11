/*
 * UVa 11172: Relational Operators
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        string ans = "<";
        if (a == b) ans = "=";
        if (a > b) ans = ">";
        cout << ans << '\n';
    }
    return 0;
}
