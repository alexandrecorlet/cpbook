/*
 * UVa 11614 - Etruscan Warriors Never Play Chess
 *
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll nb_warriors;
        cin >> nb_warriors;
        cout << (ll) (sqrt(0.25 + 2 * nb_warriors) - 0.5) << '\n';
    }

    return 0;
}
