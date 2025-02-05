#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, x; cin >> n >> x;
        vector<int> v(n), a(n);
        
        for (int j = 0; j < n; j++) {
            cin >> v[j];
            a[j] = v[j];
        }

        int maxi = 0;  
        
        for (int i = 0; i < n; i++) {
            int cnt = 1; 
            bool flag = 1; 
            int idx = -1; 

            for (int k = i; k < n - 1; k++) { 
                if (v[k] <= v[k + 1]) {
                    cnt++;
                } 
                else if (v[k] <= v[k + 1] * x && flag) { 
                    cnt++;
                    v[k + 1] *= x;
                    idx = k + 1;
                    flag = 0;
                } 
                else {
                    break;
                }
            }
            maxi = max(cnt, maxi); 
            if (idx != -1) v[idx] = a[idx]; 
        }

        cout << maxi << endl;
    }
}
