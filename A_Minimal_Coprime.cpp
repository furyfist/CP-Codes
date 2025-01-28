#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--){
        int l,r; cin >> l >> r;
        if(l==r && l != 1) cout << "0" << endl;
        else if(l==r && l==1){
            cout << "1" << endl;
        } else{
            cout << r - l << endl;
        }
        
    }
}
    
