#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    bool flag = true;
    
    for(int i=1; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            flag = false;
        }
    }

    if(flag){
        if(s[0] >= 'a' && s[0] <= 'z'){
            s[0] = toupper(s[0]);
        }
        else if(s[0] >= 'A' && s[0] <= 'Z'){
            s[0] = tolower(s[0]);
        }
        for(int j=1; j<s.size(); j++){
           s[j] = tolower(s[j]); 
        }
        cout << s;
    }
    else {
        cout << s;
    }
}
    
