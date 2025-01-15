#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
signed main() {
    int tc; cin >> tc;
    while (tc--) {
        int n; cin >> n;
        int arr[n];
        int mini = INT_MIN;
        int mini2 = INT_MAX;
        for(int i=0; i < n; i++){
            cin >> arr[i];
        } 
        for(int i=0; i<n-1; i++){
            mini= max(arr[i],arr[i+1]);
            mini2 = min(mini,mini2);
        }
        cout << mini2 - 1 << endl;
    } 
}
