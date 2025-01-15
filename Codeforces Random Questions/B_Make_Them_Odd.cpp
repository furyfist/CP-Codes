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
    set<int>a;

    for (int i = 0; i < n; i++) {
        int elem;
        cin >> elem;
        a.insert(elem);
    }

    int result = 0;
    
    while (!a.empty()) {
        int m = *a.rbegin();
        a.erase(m);
        if (m % 2 == 0) {
            result++;
            a.insert(m / 2);
        }
    }
    cout << result << endl;       
    }
}
