/*
 * Kattis - Faktor
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int pub_articles, imp_factor;
    cin >> pub_articles >> imp_factor;
    cout << pub_articles * (imp_factor - 1) + 1 << '\n';
    return 0;
}
