#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--){
        int a,b,c; cin >> a >> b >> c;
        if(a+b == c) cout << '+'<<endl;
        else cout << '-' << endl;
    }
}
