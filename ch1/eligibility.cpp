/*
 * Kattis: Eligibility
 * author: Alexandre Corlet
 */

#include <bits/stdc++.h>
#define get_year(s) stoi(s.substr(0, 4))

using namespace std;

string is_eligible(string psd, string bd, int courses) {
    string status = "coach petitions";

    int psy = get_year(psd);            // get which year the student began his post secondary studies 
    int bdy = get_year(bd);             // get which year the student was born

    if (psy >= 2010 || bdy >= 1991)
        status = "eligible";
    else if (courses > 40)
        status = "ineligible";

    return status;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string name, psd, bd;
        int courses;
        cin >> name >> psd >> bd >> courses;
        cout << name << " " << is_eligible(psd, bd, courses) << '\n';
    }
    return 0;
}
