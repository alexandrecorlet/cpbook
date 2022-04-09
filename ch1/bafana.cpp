/*
 * UVa 11805 - Bafana Bafana
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>
using namespace std;

int32_t main() {
    int t, caseNo = 1;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        while (p--)
            k = (k + 1) % n;
        if (k == 0) k = n;
        cout << "Case " << caseNo++ 
             << ": " << k << '\n';
    }
    return 0;
}
