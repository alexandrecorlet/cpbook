/*
 * Codeforces: Gravity Flip
 * author: uncoded
 */

#include <bits/stdc++.h>

using namespace std;

int32_t main() {
    int n;
    scanf("%d", &n);

    int a[n + 3];
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    sort(a, a+n);

    for (int i = 0; i < n; ++i)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
