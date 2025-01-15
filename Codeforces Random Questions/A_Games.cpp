#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc = 1 ; //cin >> tc; 
    while (tc--) {
        int n; cin >> n;
        vector<int> a(n);  
        vector<int> b(n);
        int ans = 0;
        for(int i=0; i<n; i++){
            cin >> a[i] >> b[i];
        }
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(a[j] == b[k])ans++;
            }
        }
        cout << ans;
    }
}
