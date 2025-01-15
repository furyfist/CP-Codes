#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc; cin >> tc;
    while(tc--){
        int n; cin >> n;
        int input;
        int arr[n];
        int total = 0;
        int mini = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            mini = min(mini,arr[i]);
        }
        for(int j =0; j< n; j++){
            arr[j] = arr[j] -  mini;
            total +=arr[j] ;
        }
        cout << total << endl;
    }   
}
