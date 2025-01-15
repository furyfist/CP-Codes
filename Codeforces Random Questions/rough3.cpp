#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    // Two condition 
    // 1. either it only contains uppercase letter.
    // 2. All letters except for the first one are uppercase.
    for (int i=1; i<s.size() ; i++){
        if(s[i] >=65 && s[i] <= 90){ // all are capital letters
            if(s[0] >=65 && s[0] <= 90){ // first letter is capital
                cout << s;
            }
            else{
                s[0] = s[0] - 32;
                for (int j=0; j<s.size();j++){
                    if(s[i] >= 97){ // charecters are small
                        s[i] = s[i] - 32;
                    }
                    else {
                        s[i] = s[i] + 32;
                    }
                }
            }
        }
    }
}
    
