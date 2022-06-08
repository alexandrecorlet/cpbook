/*
 * Codeforces Round #258 - A. Game With Sticks
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n, m;
    cin >> n >> m;
    cout << (!(min(n, m) % 2) ? "Malvika\n" : "Akshat\n");
    return 0;
}
