/*
 * Kattis: Judging Moose
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>
using namespace std;
int32_t main() {
    int l, r;
    cin >> l >> r;
    
    int nb_tines = max(l, r);
    string moose_type = "Even ";
    if (l == 0 && r == 0)
        moose_type = "Not a moose ";
    else if ((l > 0 || r > 0) && (l != r)) 
        moose_type = "Odd ";
    nb_tines *= 2;

    cout << moose_type 
         << ((nb_tines > 0) ? to_string(nb_tines) : "")
         << '\n';

    return 0; 
}
