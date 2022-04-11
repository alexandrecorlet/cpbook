/*
 * UVa 12372: Packing for Holiday
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int t;
    cin >> t;
    int caseNo = 1;
    while (t--) {
        int l, w, h;
        cin >> l >> w >> h;
        cout << "Case " << caseNo++ << ((l <= 20 && w <= 20 && h <= 20) ? ": good\n" : ": bad\n"); 
    }
    return 0;
}

