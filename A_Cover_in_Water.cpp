#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--) {
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0;

        for(int i=0; i<n; i++){
            if(s[i] == s[i+1] && s[i] == s[i+2] && s[i] == '.'&& i+2 < n){
                cnt = 2;
                break;
            } else if(s[i] != '#') {
               cnt ++;
            } 
        }
        cout << cnt << endl;
    }
}
