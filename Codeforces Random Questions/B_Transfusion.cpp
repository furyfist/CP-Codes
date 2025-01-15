#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc; 
    cin >> tc; 
    while (tc--) {
        int n; cin >> n;
        vector<int> arr(n);
        int oddsum =0, evensum = 0;
        int Teven,Todd;
        for(auto &it : arr){
            cin >> it;
        }
        for(int i=0; i<n; i++){
            if(i%2 == 0) {
                evensum+=arr[i];
            }
            else {
                oddsum+=arr[i];
            }
        }

        Todd = n/2;
        Teven = n - Todd;
        
        if(oddsum/Todd != evensum/Teven || evensum%Teven != 0 || oddsum%Todd  !=0){
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}
