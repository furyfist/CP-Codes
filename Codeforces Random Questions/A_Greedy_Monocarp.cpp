#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; 
    cin >> tc; 
    while (tc--) {
        int n; cin >> n; 
        int k; cin >> k;
        int sum =0;
        int itr = 0;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr.rbegin(),arr.rend());
        while ((itr < n) && (sum + arr[itr] <= k)){
            sum += arr[itr]; itr++;
        }
        cout << k - sum << endl;
    }
}
