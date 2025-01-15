#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int q; cin >> q;
        int n = s.size();

        while (q--){
            int i,v; cin >> i >> v;
            s[i-1] = '0' + v;
            bool flag = 0;
            for(int j=0; j<n; j++){
                if(s[j] == '1' &&  s[j+1] == '1' && s[j+2] == '0' && s[j+3] == '0' && (j+3) < n){
                    flag = 1;
                    break;
                }  
            }
            if(flag) { 
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
    }
    // Current TC : O(t*q*n);
}