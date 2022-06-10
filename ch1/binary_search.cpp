/*
 * CP4 book Exercise 1.3.4.1 - 6: Given a list of sorted integers L
 * of size up to 1M items, determine wheter a vlaue v exists in L 
 * with no more tha 20 comparisons
 *
 * author: alexandrecorlet
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n;
    scanf("%d", &n);
    
    vector<int> L(n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &L[i]);

    int target;
    scanf("%d", &target);
    
    auto it = lower_bound(L.begin(), L.end(), target);

    if (it != L.end())
        printf("%d at position: %ld\n", target, it - L.begin() + 1);
    else
        printf("%d does not exist in list L.\n", target);

    return 0;
}
