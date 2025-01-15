#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int tc; cin >> tc;
    while(tc--){
        int p; cin >> p;
        cout << "2" << " " << p - (p%2)<< endl;
    }
}
