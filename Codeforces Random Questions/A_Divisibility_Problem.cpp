#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int tc; cin>>tc;
    while(tc--){
    int a,b; cin >> a>>b;

    int c = (a/b) + 1;
    if(a<b){
        cout << b - a << endl;
    }
    else if(a%b == 0){
        cout << "0" << endl;
    }
    else{
        cout << c*b - a << endl;
    }

    }

}
