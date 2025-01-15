#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        int n; cin>>n;
        int k; cin >> k;

        int b,c;
        vector<int> cost(k,0);
        for(int i=0; i<k; i++){
            cin >> b >> c;
            cost[b-1] +=c;
        }
        sort(cost.rbegin(),cost.rend());
        int ans = 0;
        for(int j=0; j< min(n,k); j++){
            ans +=cost[j];
        }
        cout << ans << endl;
    }
}
