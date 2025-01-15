#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    vector<bool> present(26, false);

    for (int i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            present[s[i] - 'a'] = true;
        }
    }

    bool is_pangram = true;
    for (bool flag : present) {
        if (!flag) {
            is_pangram = false;
            break;
        }
    }

    if (is_pangram)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
