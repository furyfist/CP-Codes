#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin>> tc;
    while (tc--){
        int n; cin >> n; 
        int arr[n];
        int maxi1 = INT_MIN;
        int maxi2 = INT_MIN;
        int cnt1 = 0;
        int cnt2 = 0;
        
        for(int i=0; i<n ;i++){
            cin >> arr[i];
        }
        
        for(int i=0; i<n ;i+=2){
            cnt1 ++;
            maxi1  = max(maxi1,arr[i]);
        }
        for(int j=1; j<n ;j+=2){
            cnt2 ++;
            maxi2  = max(maxi2,arr[j]);
        }

        cout << max(maxi1 + cnt1, maxi2 + cnt2) << endl;

        
        
        
    }
}   
