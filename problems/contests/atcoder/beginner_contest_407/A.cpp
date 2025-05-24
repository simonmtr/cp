#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;

    float c = (float)a/(float)b;
    int d = a/b;
    float e = (float)c - (float)d;
    // cout << c << ' ' << d << ' ' << e << endl;
    if (e < 0.5) {
        cout << d << endl;
    } else {
        cout << d + 1 << endl;
    }

    
}
