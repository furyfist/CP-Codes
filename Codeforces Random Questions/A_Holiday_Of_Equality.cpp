#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int n; cin >> n;
    vector<int> v(n);
    int maxi = INT_MIN;
    int ans =0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        maxi = max(maxi,v[i]);
    }
    for(int j=0; j<n; j++){
        ans += maxi - v[j];
    }
    cout << ans;
}