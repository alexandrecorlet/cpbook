// CP4 exercise 1.3.4.1 - item 5: Given the distinct and valid birthdates of n people
// as triples (DD, MM, YYYY), order them first by ascending birth months (MM),
// then by ascending birth dates (DD), and finally by ascending age.
// author: uncoded

#include <bits/stdc++.h>

using namespace std;

typedef tuple<int, int, int> iii;

int32_t main() {
    vector<iii> dobs;
    dobs.emplace_back(12, 10, 1999);
    dobs.emplace_back(2, 25, 2002);
    dobs.emplace_back(4, 30, 1993);
    sort(dobs.begin(), dobs.end());
    for (auto &[mm, dd, yyyy] : dobs)
        printf("%d %d %d\n", mm, dd, yyyy);
    return 0;
}
