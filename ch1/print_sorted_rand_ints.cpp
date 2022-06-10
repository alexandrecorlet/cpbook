/*
 * CP4 book - exercise 1.3.4.1 - 2: Given n integers, print
 * the distinct (unique) integers in sorted order.
 *
 * author: uncoded
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    set<int> nums;
    while (n--)
        nums.insert(rand() % 100);

    for (int num : nums)
        printf("%d ", num);
    printf("\n");

    return 0;
}
