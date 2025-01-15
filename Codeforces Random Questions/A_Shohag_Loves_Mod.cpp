#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--){
        int n; cin >> n;
        for (int i=1; i <=((2*n) - 1) ;i+=2){
            cout << i << " ";
        }
        cout << endl;
        
    }
}
