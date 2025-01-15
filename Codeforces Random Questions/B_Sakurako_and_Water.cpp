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
        int maxi = LLONG_MIN; // Use LLONG_MIN for long long
        int count = 0;
        
        // Initialize the 2D vector of size n x n
        vector<vector<int>> v(n, vector<int>(n)); 
        for (int k = 0; k < n; k++) {
            for (int l = 0; l < n; l++) {
                cin >> v[k][l];
            }
        }

        // Fix the loop to avoid out-of-bounds access
        for (int i = 0; i < n; i++) { // Loop from 0 to n-1
            for (int j = 0; j + i < n; j++) { // Ensure `i + j` does not exceed `n - 1`
                if (v[i + j][j] < 0) {
                    int p = abs(v[i + j][j]);
                    maxi = max(maxi, p);
                }
            }
            if (maxi != LLONG_MIN) { // Only add to count if a valid negative value was found
                count += maxi;
            }
            maxi = LLONG_MIN; // Reset for the next iteration
        }

        cout << count << endl;
    }

    return 0;
}
