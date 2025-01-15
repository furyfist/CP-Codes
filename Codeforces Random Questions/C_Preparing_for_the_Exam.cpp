#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> v(m), v2(k);
        
        for (int q = 0; q < m; q++) {
            cin >> v[q];
        }
        for (int e = 0; e < k; e++) {
            cin >> v2[e];
        }

        if (n-k >1) { // Changed condition to handle n-k > 1
            for (int i = 0; i < n; i++) {
                cout << "1";
            }
        } 
        else if (n- k <1) { // Changed condition to handle n-k < 1
            for (int r = 0; r < n; r++) {
                cout << "0";
            }
        } 
        else if(n-k == 1) {
            for (int j = 0; j < m;j++) { // Added bounds check
                if (v2[j] != v[j]) {
                    cout << "0";
                } else {
                    cout << "1";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
