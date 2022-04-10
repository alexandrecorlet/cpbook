/*
 * UVa 11044 - Searching For Nessy
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        n -= n % 3;
        m -= m % 3;
        cout << n * m / 9 << '\n';
    }
    return 0;
}
