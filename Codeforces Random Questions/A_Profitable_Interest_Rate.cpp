#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
signed main() {
    int tc; cin >> tc;
    while (tc--) {
        int a; cin >> a;
        int b; cin >> b;
        int res1,res2;
        
        if(a>=b) cout << a << endl;
        else {
            cout << a - max(0,b-a) << endl;
        }
    } 
}
