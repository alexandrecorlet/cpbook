/*
 * Kattis: One Chicken Per Person!
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>
using namespace std;
int32_t main() {
    int n, m;
    cin >> n >> m;

    int x = abs(n - m);
    if (m > n && x > 1)
        cout << "Dr. Chaz will have " << x 
             << " pieces of chicken left over!" << '\n';
    else if (m > n)
        cout << "Dr. Chaz will have " << x 
             << " piece of chicken left over!" << '\n';
    else if (x > 1)
        cout << "Dr. Chaz needs " << x 
             << " more pieces of chicken!" << '\n';
    else
        cout << "Dr. Chaz needs " << x 
             << " more piece of chicken!" << '\n';
        
    return 0;
}
