#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    vector<int>v(5);
    cin >> v[0] >> v[1] >> v[2] >> v[3] >> v[4];
    
    sort(v.begin(),v.end());

    if(v[0] == v[1] && v[1] ==  v[2] && v[2] ==  v[3] && v[3] == v[4]) cout << "No";
    else if(v[0] == v[1] && v[2] == v[3] && v[3] == v[4] || v[0] == v[1] && v[1] == v[2] && v[3] == v[4] ) cout << "Yes";
    else cout <<"No";
}