#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--){
        int input;
        int one = 0;
        int zero = 0;
        int n; cin >> n;
        for(int i=0; i< 2*n;i++){
            cin >> input;
            if(input == 1) one++;
            else zero++;
        }
        cout << n - ((zero/2) + (one/2)) << " ";
        cout << min(one,zero) << endl;
    }
}