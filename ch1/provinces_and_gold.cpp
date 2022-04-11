/*
 * Kattis: Province and Golds
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>

using namespace std;

string getVictoryCard(int buyingPower) {
    string best = "";
    if (buyingPower >= 8)
        best = "Province";
    else if (buyingPower >= 5)
        best = "Duchy";
    else if (buyingPower >= 2)
        best = "Estate";
    return best;
}

string getTreasureCard(int buyingPower) {
    string best = "Copper";
    if (buyingPower >= 6)
        best = "Gold";
    else if (buyingPower >= 3)
        best = "Silver";
    return best;
}

int32_t main() {
    int g, s, c;
    cin >> g >> s >> c;
    int buyingPower = 3*g + 2*s + c;
    string ans = getVictoryCard(buyingPower);
    if (!ans.empty()) ans += " or ";
    ans += getTreasureCard(buyingPower);
    cout << ans << '\n';
    return 0;
}
