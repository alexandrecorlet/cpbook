/*
 * Kattis: Moscow Dream
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n, e, m, h;
    cin >> e >> m >> h >> n;

    string ans = "YES";
    if ((n < 3) || (e < 1 || m < 1 || h < 1) || (e + m + h < n))
        ans = "NO";

    cout << ans << '\n';

    return 0;
}
