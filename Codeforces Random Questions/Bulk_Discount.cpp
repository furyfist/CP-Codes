#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc; 
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it : v) {
            cin >> it;
        }

        // Sort the costs in descending order
        sort(v.begin(), v.end(), greater<int>());

        int total_cost = 0;
        for (int i = 0; i < n; i++) {
            // Apply the discount by subtracting the number of items already bought (i)
            int cost = v[i] - i;
            // Ensure the cost does not go below 0
            if (cost < 0) cost = 0;
            total_cost += cost;
        }

        cout << total_cost << endl;
    }

    return 0;
}
