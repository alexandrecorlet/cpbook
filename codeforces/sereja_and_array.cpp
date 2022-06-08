/*
 * Codeforces Round #187: B. Sereja and Array
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int a[n + 10]; 
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    int add = 0;
    while (m--) {
        int query;
        cin >> query;

        if (query == 1) {
            int i, x;
            cin >> i >> x;
            a[i] = x - add;
        } else if (query == 2) {
            int v;
            cin >> v;
            add += v; 
        } else if (query == 3) {
            int i;
            cin >> i;
            cout << a[i] + add << '\n';
        }

    }

    return 0;
}
