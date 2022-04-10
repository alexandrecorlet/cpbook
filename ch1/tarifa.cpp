/*
 * Kattis: Tarifa
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int x, n;
    cin >> x >> n;
    int total = x * (n + 1);
    while (n--) {
        int p;
        cin >> p;
        total -= p;
    }
    cout << total << '\n';
    return 0;
}
