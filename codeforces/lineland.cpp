/*
 * Codeforces Round #Pi (Div. 2) - A. Lineland Mail
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>

using namespace std;

const int MAXN = 112345;

int n, x[MAXN];

int compute_distance(int x0, int x1) {
    return abs(x1 - x0);
}

int32_t main() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> x[i];

    for (int i = 0; i < n; ++i) {

        int min_dist, max_dist;    
        if (i == 0) {
            min_dist = compute_distance(x[0], x[1]);
            max_dist = compute_distance(x[n-1], x[0]);
        } else if (0 < i && i < n - 1) {

            min_dist = min(compute_distance(x[i], x[i+1]),
                        compute_distance(x[i-1], x[i]));

            max_dist = max(compute_distance(x[0], x[i]),
                            compute_distance(x[i], x[n-1]));

        } else {
            min_dist = compute_distance(x[i-1], x[i]);
            max_dist = compute_distance(x[0], x[i]);
        }

        cout << min_dist << " " 
            << max_dist << '\n';
    }

    return 0;
}
