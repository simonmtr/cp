#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;

    long long nums_prefix[n+1];
    long long nums_ordered[n+1];
    for (int i = 1; i<=n; ++i) {
        int temp;
        cin >> temp;
        nums_prefix[i] = nums_ordered[i] = temp;
    }
    sort(nums_ordered+1, nums_ordered + 1 + n);
    for (int i = 1; i<=n; ++i) {
        nums_prefix[i] += nums_prefix[i-1];
        nums_ordered[i] += nums_ordered[i-1];
    }
    int t;
    cin >> t;
    for (int i = 1; i<=t; ++i) {
        int type, l, r;
        cin >> type >> l >> r;
        if (type == 1) {
            cout << nums_prefix[r] - nums_prefix[l-1] << "\n";
        } else if (type == 2) {
            cout << nums_ordered[r] - nums_ordered[l-1] << "\n";
        }
    }

}
