#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
// This code gives TLE!
signed main() {
    int tc; cin >> tc;  
    while(tc--) {
        int n; cin >> n;
        int cnt = 0, maxi = 0;
        vector<int> v;
        
        for(int i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                v.push_back(i);
            }
        }
        
        if(v.empty()) {
            cout << 0 << endl;
            continue;
        }

        for(int j = 0; j < v.size() - 1; j++) { 
            if(v[j] + 1 == v[j + 1]) {
                cnt++;
            } else {
                maxi = max(cnt, maxi);
                cnt = 0;
            }
        }
        
        maxi = max(cnt, maxi);
        cout << maxi + 1 << endl; 
    }
}
