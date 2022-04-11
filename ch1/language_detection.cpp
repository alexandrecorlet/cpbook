/*
 * UVa 12250: Language Detection
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int caseNo = 1;
    for (;;) {
        string input;
        cin >> input;

        if (input == "#") break;

        string language = "UNKNOWN";
        if (input == "HELLO")
            language = "ENGLISH";
        else if (input == "HOLA")
            language = "SPANISH";
        else if (input == "HALLO")
            language = "GERMAN";
        else if (input == "BONJOUR")
            language = "FRENCH";
        else if (input == "CIAO")
            language = "ITALIAN";
        else if (input == "ZDRAVSTVUJTE")
            language = "RUSSIAN";

        cout << "Case " << caseNo++ << ": " 
             << language << '\n';

    }
    return 0;
}
