#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

int count(string s){
    vector<int> v(26,0);
    int cnt = 0;
    for(int i=0; i<s.size(); i++){
        v[s[i] - 'a']++; 
    }
    for(int j=0; j<26; j++){
        if(v[j]%2){
            cnt++;
        }
    }
    return cnt;
}

signed main() {
    int tc; cin >> tc;
    while(tc--){
        int n; cin>>n;
        int k; cin >> k;
        string s; cin >> s;
        int total_odd = count(s);
        if(total_odd - k < 2){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
