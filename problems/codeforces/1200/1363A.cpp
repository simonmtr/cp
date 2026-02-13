#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, x, odd_sum=0, even_sum=0;
        cin >> n >> x;
        for (int i = 0; i<n; ++i) {
            int temp;
            cin >> temp;
            if (temp%2 == 0) {
                even_sum++;
            } else {
                odd_sum++;
            }
        }
        bool found = false;
        for (int i = 1; i<=odd_sum && i<=x; i+=2){
            if (x-i<=even_sum && !found) {
                cout << "Yes" << endl;
                found = true;
            }
        }
        if (!found){
            cout << "No" << endl;
        }
    }
}
