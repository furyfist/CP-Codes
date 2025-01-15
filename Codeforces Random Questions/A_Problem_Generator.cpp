#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc;
    while (tc--) {
        int n, m; 
        cin >> n >> m;
        string a; 
        cin >> a; // n characters long
        int sum = 0;
        
        vector<int> v(7, m); // counts for 'A' to 'G'
        
        for (int i = 0; i < n; i++) {
            int idx = a[i] - 'A'; // Get the index for character a[i]
            if (idx >= 0 && idx < 7 && v[idx] > 0) {
                v[idx]--; // Decrease count for the corresponding character
            }
        }
        
        // Calculate the sum of remaining counts
        for (int j = 0; j < 7; j++) {
            sum += v[j]; // Sum elements of v (not a)
        }
        
        cout << sum << endl;
    }
}
