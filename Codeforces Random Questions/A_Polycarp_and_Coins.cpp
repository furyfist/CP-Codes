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
        int n; cin >> n;
        int rem = n%3;
        int ans = n/3;
        if(rem ==0) {
            cout << ans << " " << ans << endl;
        } else if(rem == 1){
            cout << ans+1 << " " << ans << endl;
        } else {
            cout << ans << " " << ans+1 << endl;
        }
    }
}