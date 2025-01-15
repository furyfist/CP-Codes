#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; 
    cin >> tc; 
    while (tc--) {
        int n; 
        cin >> n;
        int sum = 0;
        int ans = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
            int root = sqrt(sum);
            if (root * root == sum && root % 2 != 0) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
