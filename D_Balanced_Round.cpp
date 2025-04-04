#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        
        for(auto &it : v) cin >> it;
        sort(v.begin(), v.end());

        int maxi = 0, cnt = 1; 

        for(int i = 1; i < n; i++) {
            if (v[i] - v[i - 1] <= k) {
                cnt++; 
            } else {
                maxi = max(maxi, cnt);
                cnt = 1; 
            }
        }

        maxi = max(maxi, cnt);
        cout << n - maxi << endl; 
    }

    return 0;
}
