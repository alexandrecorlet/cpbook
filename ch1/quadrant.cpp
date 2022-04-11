/*
 * Kattis: Quadrant Selection
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>
using namespace std;
int32_t main() {
    int x, y;
    cin >> x >> y;
    int quadrant = 1;
    if (x < 0 && y > 0)
        quadrant = 2;
    else if (x < 0 && y < 0)
        quadrant = 3;
    else if (x > 0 && y < 0)
        quadrant = 4;
    cout << quadrant << '\n';
    return 0;
}
