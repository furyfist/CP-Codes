#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n; cin >> n;
    int sum = 0;
    
    if(n%2 == 0){
        sum = (n/2) * 1;
    }
    else {
        sum = (n/2) - n;
    }
    cout << sum;
}
