#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc;
    while(tc--){
        int x,y; cin >> x >>y;
        int hx = x/2; int hxx = x/2;
        while(hx--){
            cout<< "1";
        }
        while(y--){
            cout<< "2";
        }
        while(hxx--){
            cout<< "1";
        }
        cout << endl;
    }
}
