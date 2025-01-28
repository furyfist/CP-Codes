#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc;
    while (tc--){
        int n,l,r; cin >> n >> l >> r;
        vector<int> v(n),a,b;
        int sum1 =0, sum2 =0;
        for(auto &x : v){
            cin >> x;
        }

        for(int i=0; i<=r; i++){
            a.push_back(v[i]);
        }
        for(int j=l ;j<n; j++){
            b.push_back(v[j]);
        }
        sort(a.begin(),a.end()); sort(b.begin(),b.end());

        for(int k=0; k<(r-l+1);k++){
            sum1+=a[k];
            sum2+=b[k];
        }
        int ans = min(sum1,sum2);
        cout << ans  << endl;

    }
}
