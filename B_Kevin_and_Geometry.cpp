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
        vector<int> v(n);

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend()); 
        int a = -1, b = -1;
        // 
        for (int j = 1; j < n; j++) {
            if (v[j] == v[j - 1]) {
                a = v[j];
                b = v[j];
                v.erase(v.begin() + j - 1, v.begin() + j); 
                v.erase(v.begin() + j , v.begin() + j + 1);
                break;
            }
        }

        if (a == -1) {
            cout << "-1" << endl;
            continue; 
        }

        bool found = false;
        for (int l = 1; l < v.size(); l++) {
            if (2 * a > abs(v[l - 1] - v[l])) {
                cout << a << " " << a << " " << v[l - 1] << " " << v[l] << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "-1" << endl;
        }
    }
}
