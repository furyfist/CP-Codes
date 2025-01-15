#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int a; cin >> a;
    int b; cin >> b;
    bool flag = false;
    int x ; 
    int y;
    for(int i=0; i<=10000000; i++ ){
        for(int j=0; j<=10000000;j++){
            if(i*a + j*b == n){
                flag = true;
                 x = i;
                 y = j;
                break;
            }
            
        }
    } 
    if(flag) {
        cout << "YES" << endl;
        cout << x << " " << y; 
    }
    else cout <<"NO";
}
    
