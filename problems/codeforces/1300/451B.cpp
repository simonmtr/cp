#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n];
    int left = -1;
    int right = -1;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i + 1 < n; ++i) {
        if (a[i] > a[i+1]) {
            left = i;
            break;
        }
    }

    if (left == -1) {
        cout << "yes\n 1 1";
        return 0;
    }

    right = left;

    while (right + 1 < n && a[right] > a[right+1]) {
        right++;
    }

    if ((left > 0 && a[left - 1] > a[right]) || (right + 1 < n && a[left] > a[right + 1])){
        cout << "no";
        return 0;
    }

    for (int i = right + 1; i + 1 < n; ++i) {
        if (a[i] > a[i+1]) {
            cout << "no";
            return 0;
        }
    }

    cout << "yes\n" << left +1 << ' ' << right +1;
}
