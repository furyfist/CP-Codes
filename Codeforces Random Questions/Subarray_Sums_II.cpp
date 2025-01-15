#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc = 1; // cin >> tc;
    while (tc--) {
        int n, x; 
        cin >> n >> x;
        int cnt = 0;
        vector<int> v(n);
        vector<int> pre(n);

        for (int it = 0; it < n; it++) {
            cin >> v[it];
        }

        // Create prefix sum vector
        pre[0] = v[0];
        for (int i = 1; i < n; i++) {
            pre[i] = v[i] + pre[i - 1];
        }

        // Count subarrays with sum equal to x
        for (int j = 0; j < n; j++) {
            for (int k = -1; k < j; k++) { 
                int ans = pre[j] - (k >= 0 ? pre[k] : 0); // Handle k == -1
                if (ans == x) {
                    cnt++;
                }
            }
        }

        cout << cnt << endl; // Output the result
    }
}
