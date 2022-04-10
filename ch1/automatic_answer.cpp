/*
 * UVa 11547 - Automatic Answer
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>
using namespace std;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << abs((315 * n + 36962) / 10) % 10 << '\n'; 
    }
    return 0;
}
