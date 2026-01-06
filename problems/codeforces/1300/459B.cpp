#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    int nums[n], min_v = INT_MAX, max_v = 0;
    for (int i = 0; i<n; ++i) {
        cin >> nums[i];
        min_v = min(min_v, nums[i]);
        max_v = max(max_v, nums[i]);
    }
    long long count_min = 0, count_max = 0;
    for (int i = 0; i<n; ++i) {
        if (nums[i] == min_v) {
            count_min++;
        }
        if (nums[i] == max_v) {
            count_max++;
        }
    }
    cout << max_v - min_v << " ";
    if (max_v == min_v) {
        cout << n*(n-1)/2;
    } else {
        cout << count_min*count_max;
    }
    
}
