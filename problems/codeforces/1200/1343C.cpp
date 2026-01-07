#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int nums[n];
        for (int i = 0; i<n; ++i) {
            cin >> nums[i];
        }
        long long sum = 0;

        for (int left = 0; left<n; ++left) {
            int cur_num = nums[left];
            int right = left;
            while (right < n && ((nums[left] > 0 && nums[right] > 0) || (nums[left]<0 && nums[right]<0))) {
                cur_num = max(cur_num, nums[right]);
                ++right;
            }
            sum += cur_num;
            left = right - 1;
        }
        cout << sum << endl;
    }

}
