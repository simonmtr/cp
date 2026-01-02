#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <set>

using namespace std;

const int MAX_VAL = 1000001;

set<long long> primes() {
    static bool a[MAX_VAL];
    for (int i = 2; i*i < MAX_VAL; ++i) {
        if (!a[i]) {
            for (int j = i*i; j < MAX_VAL; j+=i) {
                a[j] = true;
            }
        }
    }
    set<long long> res;
    for (int i = 2; i < MAX_VAL; ++i) {
        if (!a[i]) {
            res.insert((long long)i*i);
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    set<long long> prime_numbers(primes());

    for (int i = 0; i < t; ++i) {
        long long n;
        cin >> n;
        if (prime_numbers.find(n) != prime_numbers.end()) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

