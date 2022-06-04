// Elephant

#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> ii;

int compute_steps(int n) {
    int nb_steps = 0;
    for (int i = 5; i > 0; i--) {
        nb_steps += n / i; 
        n %= i;
    }
    return nb_steps;
}

int32_t main() {
    int n;
    cin >> n;
    cout << compute_steps(n) << '\n';
    return 0;
}
