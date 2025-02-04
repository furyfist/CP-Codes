#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc;
    while(tc--){
        int n,k,x; cin >> n >> x >> k;
        if(2*k>=x*(x+1) && 2*k<=n*(n+1)-(n-x)*(n-x+1)){ 
			cout << "YES\n";
		}
		else cout << "NO\n";
    }
}
