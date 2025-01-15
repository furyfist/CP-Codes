#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;

        vector<int> p(n, 0);
        int it = k - 1;
        int num = 1;

        while (num <= k && it < n) {
            p[it] = num;
            it += k;
            num++;
        }

        for (int i = 0; i < n; i++) {
            if (p[i] == 0) {
                p[i] = num++;
            }
        }

        for (auto x : p) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
