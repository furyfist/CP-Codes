#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc; 
    while (tc--) {
        int n; cin >> n;
        vector<int> arr(n);
        int odd = 0;
        int ans = LLONG_MAX;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] % 2 != 0) odd++;
        }
        if (odd % 2 == 0) {
            cout << "0" << endl;
        } else {
            for (int j = 0; j < n; j++) {
                int count = 0;
                int num = arr[j];
                if (num % 2 == 0) {
                    while (num % 2 == 0) {
                        num /= 2;
                        count++;
                    }
                }
                else {
                    while (num % 2 != 0) {
                        num /= 2;
                        count++;
                    }
                }
                
                ans = min(ans, count);
            }
            cout << ans << endl;
        }
    }  
}
