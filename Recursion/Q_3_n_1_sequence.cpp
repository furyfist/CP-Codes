#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

int odd(int n) {
    return 3 * n + 1;
}

int even(int n) {
    return n / 2;
}

int solve(int n) {
    int cnt = 1; 
    while (n != 1) {
        if (n % 2 == 0) {
            n = even(n);
        } else {
            n = odd(n);
        }
        cnt++;
    }
    return cnt;
}

signed main() {
    int n;
    cin >> n;
    cout << solve(n) << endl;    
}
