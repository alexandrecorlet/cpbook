/*
 * Exercise 1.3.4.1 - 7: Generate all possible permutations of {'A', 'B', 'C', ..., 'J'},
 * the first N = 10 letters i the alphabet.
 * author: alexandrecorlet 
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    char letters[14];
    for (int i = 0; i < 10; ++i)
        letters[i] = 'A' + i;
    do {
        for (int i = 0; i < 10; ++i)
            printf("%s\n", letters);
    } while (next_permutation(letters, letters + 10));
    return 0;
}
