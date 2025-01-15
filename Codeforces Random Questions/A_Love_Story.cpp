#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    while (tc--) {
        string s; cin>>s; 
        string s2 = "codeforces";
        int count = 0;
        for(int i=0; i<10; i++){
            char r = s[i];
            char t = s2[i];
            if(r != t) count ++;
            else {

            }
        }
        cout << count << endl;
    }
}