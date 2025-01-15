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
        vector<vector<char>> v(n, vector<char>(4)); // 2D vector with n rows and 4 columns
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < 4; j++) {
                cin >> v[i][j];
            }
        }
        for(int i = n-1; i >=0 ; i--) {
            for(int j = 0; j < 4; j++) {
                if(v[i][j] == '#') {
                    cout << j+1 << " "; 
                }
                else {

                }
            }
        }
        cout << endl;
    }
}
