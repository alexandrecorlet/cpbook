/*
 * Kattis - Planina
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int32_t main() {
    ll n;
    cin >> n;
    ll height = (1 << n) + 1; 
    ll width = height;
    cout << height * width << endl;
    return 0;
}
