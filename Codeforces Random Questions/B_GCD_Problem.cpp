#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin>>tc;
    while(tc--){
        int n ; cin >> n;
        if(n%2 == 0 ) cout << (n-1)/2  << " " << (n-1)/2 + 1 << " " << "1" << endl;
        else {
            int curr = (n-1) /2 ;
            if(curr %2 == 0)  cout << (curr-1) + 1 << " " << (curr+1)  <<" " << "1" << endl;
            else  cout << (curr-2) + 1 << " " << (curr+2)  << " " << "1" << endl;
        }
    }
}