#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc ; cin >> tc; 
    while (tc--) {
        int n; cin >> n;
        int ans = 1, cur = 1;
        for (int i=1; i<=n; i++){
            if(cur < n){
                cur=cur*2 + 2;
                ans ++;
            }
            else{
                //ans++;
                break;
            }
            
        }
        cout << ans << endl;
    }
}
