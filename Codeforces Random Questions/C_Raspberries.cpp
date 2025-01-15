#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n , k;
        cin >> n >> k;
        
        int maxi = INT_MIN;
        int arr[n];
        bool flag = 0;
        int mul = 1;
        int cnt = 0;
        for(int i=0; i < n; i++){
            cin >> arr[i];

            if(arr[i] % k == 0) {
                flag = 1;
                break;
            }
            if(arr[i] % 2 == 0){
                cnt++;
            }
        }
        if(flag) cout << "0" <<endl;
    
        
        
        
    }
}
