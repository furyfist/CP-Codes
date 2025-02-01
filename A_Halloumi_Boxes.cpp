#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--) {
        int n; cin >> n; bool flag = 0;
        int k; cin >> k;
        vector<int> v(n),a(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            a[i] = v[i];
        }
        sort(a.begin(), a.end());

        if(a==v) flag = 1; // already sorted
        if(k >= 2) flag = 1;

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
