#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while(tc--){
        int n; cin >> n;
        int e=0,o=0;
        vector<int> v(n);
        for(int i=0;i<n; i++){
            cin >> v[i];
            if(!(v[i]%2)){
                e++;
            } else {
                o++;
            }
        }
        if(o%2){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }

    }
}
