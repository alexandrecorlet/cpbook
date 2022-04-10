/*
 * Kattis - Quality Adjusted Life Year
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n;
    cin >> n;
    double total_qaly = 0;
    while (n--) {
        double qaly, length;
        cin >> qaly >> length;
        total_qaly += qaly * length;
    }
    cout << fixed << setprecision(3) 
         << total_qaly << '\n';
    return 0;
}
