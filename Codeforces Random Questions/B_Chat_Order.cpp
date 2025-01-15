#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc = 1;  
    while (tc--) {
        int n; 
        cin >> n;
        vector<string> s(n);
        for (int i = 0; i < n; i++) {
            cin >> s[i];
        }
        reverse(s.begin(), s.end());

        set<string> seen;
        vector<string> ans;

        // as set stores ans in lexiographically, need to maintain order in other vector and used seen for checking unique elements!
        for (auto &str : s) {
            if (seen.find(str) == seen.end()) {
                ans.push_back(str);
                seen.insert(str);
            }
        }

        for (auto &it : ans) {
            cout << it << endl;
        }
    }
}
