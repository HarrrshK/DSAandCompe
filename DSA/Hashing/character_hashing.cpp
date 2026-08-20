/*
Character Hashing

- Create a frequency array of size 26 for lowercase English letters.
- Map each character to an index using: c - 'a'
- Precompute frequencies by incrementing hash[c - 'a'].
- Query frequency using hash[c - 'a'].
- Time: O(n) preprocessing, O(1) per query.
- Space: O(26) = O(1).

*/


#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "abacaba";

    int hash[26] = {0};

    // Precompute character frequencies
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    // Queries
    char queries[] = {'a', 'b', 'c', 'd'};

    for (char c : queries) {
        cout << c << " -> " << hash[c - 'a'] << '\n';
    }

    return 0;
}