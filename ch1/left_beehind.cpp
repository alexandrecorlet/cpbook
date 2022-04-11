/*
 * Kattis: Left Beehind
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    for (;;) {
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0) break;
        string ans = "Left beehind.";
        if (x + y == 13) ans = "Never speak again.";
        else if (x == y) ans = "Undecided.";
        else if (x > y) ans = "To the convention.";
        cout << ans << '\n';
    }
    return 0;
}
