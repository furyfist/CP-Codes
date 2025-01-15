#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

void solve() {
    int n; cin >> n; 
    int k; cin >> k;

    if(k==1 && n!=1) {
        cout << "-1" << endl;
        return;
    }
    if(k==n && n!=1) {
        cout << "-1" << endl;
        return;
    }
    if(n==1){
        cout << "1" << endl << "1" << endl;
        return; 
    }
    int m = 3;
    cout << m << endl;

    if(k%2 == 0) cout << "1" << " " << k << " " << k+1 << endl;
    else cout << "1" << " " << k-1 << " " << k+2 << endl;
}

signed main() {
    int tc; cin >> tc; 
    while (tc--){
        solve();     
    }

}