#include <bits/stdc++.h>
using namespace std;

/*
    Basic Hashing — Frequency Counting

    Given an array, count how many times each number occurs.

    Example:
    arr = {2, 3, 2, 5, 3, 2}

    Frequency:
    2 -> 3
    3 -> 2
    5 -> 1
*/

int main() {

    int arr[] = {2, 3, 2, 5, 3, 2};

    // Create a hash array.
    // Index represents the number.
    // Value represents its frequency.
    int hash[6] = {0};

    // Precompute frequencies
    for (int i = 0; i < size(arr); i++) {
        hash[arr[i]]++;
    }

    // Queries
    int queries[] = {2, 3, 5, 4};

    for (int i = 0; i < size(queries); i++) {
        cout << queries[i] << " -> " << hash[queries[i]] << endl;
    }

    return 0;
}