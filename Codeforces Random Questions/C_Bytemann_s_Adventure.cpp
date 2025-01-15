#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<int> left(n, 1), right(n, 1);  
        for (int i = 1; i < n; i++) {
            if (abs(a[i] - a[i - 1]) <= 1) {
                left[i] = left[i - 1] + 1;
            }
        }
        for (int i = n - 2; i >= 0; i--) {
            if (abs(a[i] - a[i + 1]) <= 1) {
                right[i] = right[i + 1] + 1;
            }
        }
        int buildings = 0;
        for (int i = 0; i < n; i++) {
            buildings = max(buildings, left[i] + right[i] - 1);
        }
        cout << buildings << endl;
    }
}
