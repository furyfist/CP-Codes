#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc ; cin >> tc;  
    while (tc--) {
        int l,b,k; cin >> l >> b >> k;
        int mini = INT_MAX;
        for(int i=l; i>=1; i--){
            for(int j=b; j>=1; j--){
                mini = min (mini, abs(k - 2*(i+j)));
            }
        }
        cout << mini << endl;
    }
}
