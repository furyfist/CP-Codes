#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--){
        int n; cin>>n;
        int v[n];
        bool flag = 0;
        for (int i=0; i<n;i++){
            cin >> v[i];
        }
        for(int j=0; j<n-1;j++){
            if(abs(v[j] - v[j+1]) == 5 ||abs(v[j] - v[j+1]) == 7 ){
                flag = 1;
            }
            else {
                flag = 0;
                break;;
            }
        }
        if(flag) {
            cout << "YES" <<endl;
        }
        else cout << "NO" <<endl;
    }

}