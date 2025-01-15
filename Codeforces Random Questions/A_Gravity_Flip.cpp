#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int input;
    vector<int>v;
    for(int i=0; i<n; i++){
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin() , v.end());
    for(int j=0; j<n; j++){
        cout << v[j] << " ";
    } 
}
    
