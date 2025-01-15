#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc; 
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        if(n%33 == 0) {
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    
}
