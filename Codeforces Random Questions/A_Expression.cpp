#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    vector<int>v;
    int a,b,c; cin >> a >>b >>c;
    int v0 = a+b+c;
    int v1 = a+(b*c);
    int v12 = (a+b)*c;
    int v2 = (a*b)+c;
    int v22 = a*(b+c);
    int v3 = a*b*c;
    v.push_back(v0);
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(v12);
    v.push_back(v22);
    sort(v.begin(),v.end());
    cout << v[5];  
}
   