/*
 * Educational CF Round #56 (Div. 2): A. Dice Rolling
 *
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>

using namespace std;

int rolls_needed(int x) {
    return x / 2;
}

int32_t main() {
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << rolls_needed(x) << '\n';
    }

    return 0;
}
