#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    
    while (tc--) {
        int xcout =0;
        int ycount =0;
        int x,y,z; cin >> x >> y >> z;
        if(x%z >0){
            xcout = (x/z) + 1;
        }
        else{
            xcout = (x/z);
        }
        
        if(y%z >0){
            ycount = (y/z) + 1;
        }
        else{
            ycount = (y/z);
        }
        int maxi = max(xcout,ycount);
        int mini = min(xcout,ycount);
        int extra = maxi - mini;
        if(x <= y){
            cout << xcout + ycount + extra << endl;
        }
        else {
            cout << xcout + ycount + extra - 1 << endl;
        }
    }
}