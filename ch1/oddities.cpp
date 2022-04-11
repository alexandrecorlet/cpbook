/*
 * Kattis: Oddities
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        cout << x << ((x & 1) ? " is odd\n" : " is even\n");
    }
    return 0;
}
