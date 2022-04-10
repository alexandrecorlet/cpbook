/*
 * Kattis - Roaming Romans
 *
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    double x;
    cin >> x;
    int rm = (int) (0.5 + x * 1000 * 5280 / 4854); 
    cout << rm << '\n';
    return 0;
}
