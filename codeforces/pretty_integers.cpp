/*
 * Codeforces - Technocup 2018: Elimination Round
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 13;

int32_t main() {
    int n, m;
    cin >> n >> m;

    int a[MAXN], b[MAXN];
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    for (int i = 0; i < m; ++i)
        cin >> b[i];

    int best = 99;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (a[i] == b[j]) {
                best = min(best, a[i]);
            } else {
                best = min(best, a[i] * 10 + b[j]);
                best = min(best, b[j] * 10 + a[i]);
            }
        }
    }
    
    cout << best << '\n';

    return 0;
}
