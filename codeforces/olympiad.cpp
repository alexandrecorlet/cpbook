// Olympiad

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    
    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        if (p == 0) continue;
        s.insert(p);
    }

    cout << s.size() << endl;

    return 0;

}
