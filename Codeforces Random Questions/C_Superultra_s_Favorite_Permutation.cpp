#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc; 
    cin >> tc; 
    while (tc--) {
        int n; cin >> n;
        if (n <= 4)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 2 << " ";
            for (int i = 6; i <= n; i += 2)
            {
                cout << i << " ";
            }
            cout << 4 << " ";
            cout << 5 << " ";
    
            cout << 1 << " ";
            for (int i = 3; i <= n; i += 2)
            {
                if (i != 5)
                {
                    cout << i << " ";
                }
            }
            cout << endl;
    }

    }
}
