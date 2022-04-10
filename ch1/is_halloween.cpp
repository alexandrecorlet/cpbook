/*
 * Kattis: IsItHalloween.com
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>
using namespace std;
int32_t main() {
    string date;
    getline(cin, date);
    cout << ((date == "OCT 31" || date == "DEC 25") ? "yup" : "nope") << '\n'; 
    return 0;
}
