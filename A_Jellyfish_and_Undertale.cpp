#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> a >> b >> n;
    
    long long ans = b;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ans += min(a - 1, x);
    }
    
    cout << ans << '\n';
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
