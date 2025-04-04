#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        vector<int> cnt(2, 0);
        for (char c : s) {
            cnt[c - '0']++;
        }
        int ans = 0;
        for (int i = 0; i <= n; i++){
            if (i == n || cnt[1 - (s[i] - '0')] == 0){
                ans = n - i;
                break;
            }
            cnt[1 - (s[i] - '0')]--;
        }
        cout << ans << endl;
    }
    return 0;
}
