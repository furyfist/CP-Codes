#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> a(n);  
    vector<int> b(n);  
    bool flag = true;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int j = 0; j < n; j++) {
        cin >> b[j];
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    for(int l=0; l<n; l++){
        if(a[l] != b[l]){
            flag = false;
            break;
        }
    }

    if(flag) cout << "yes";
    else cout << "no";

}

