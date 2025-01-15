#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin>> tc;
    while (tc--){
        int n; cin >> n; 
        int maxi = INT_MIN;
        for(int i = 1 ; i <= n/2 ; i++ ){
            for(int j=1; j<= n/2 ; j++){
                
                if( 2*i + 2*j <= n){
                    maxi = max(maxi,i*j);
                }
            }
        }
        if(n<5) cout << "0" << endl;
        else{
            cout << maxi << endl;
        }
    }
}   
