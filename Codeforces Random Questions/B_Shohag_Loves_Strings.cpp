#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long


void solve(){
    string s; cin >> s;
    int n = s.size();
    // loop to find consectitive 2 elements.
    for(int i=0 ; i+1 < n; i++){
        if(s[i] == s[i+1]){
            cout << s.substr(i,2) << endl;
            return;
        }
    }  
    // loop to find consecttive 3 diffrent elements.
    for(int i=0; i+2 < n; i++){
        if(s[i] != s[i+1] && s[i] != s[i+2]){
            cout << s.substr(i,3) << endl;
            return; 
        }
    }
    cout << "-1" << endl;
}

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc ; cin >> tc; 
    while (tc--) {
        solve();
    }
}
