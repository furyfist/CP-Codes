#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool isprime (int n){
    if(n==0 || n==1)
        return 0;
    for(int i=2; i<=sqrt(n) ; i++){
        if(n%i == 0) return 0;
    }
    return 1;
}

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n,k; cin >> n >> k;
    



    
    if(k <= count ) cout << "YES";
    else cout << "NO";
}