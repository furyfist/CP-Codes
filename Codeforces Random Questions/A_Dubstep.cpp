#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    string s2;
    int size = s.size();
    for(int i=0; i<size ; ){
        if((i+1) < size && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            if(!s2.empty() && s2.back() != ' ') s2+=" ";
            i += 3;
        }
        else{
            s2+=s[i];
           i++;
        }
    }
    cout << s2;
}
   