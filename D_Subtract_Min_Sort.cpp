#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc;
    while (tc--){
        int n ; cin >> n;
        vector<int> a(n);
        bool flag = 1;
        for(int l=0; l<n; l++){
            cin >> a[l];
        }

        for(int i=0; i<n; i++){
            if(a[i] <= a[i-1]){
                flag = 0;
                break;
            } else {
                int mini = min(a[i-1],a[i]);
                a[i] -= mini;
                a[i-1] -= mini;
            }

        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
