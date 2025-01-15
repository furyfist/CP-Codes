#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc; 
    cin >> tc; // Number of test cases
    while (tc--) {
        string s; cin >> s;
        int n = s.size();
        vector<int> v(26,0);
        int cnt1 =0, cnt2=0;
        for(int i=0; i<n; i++){
            v[(s[i] - 'a')] ++;
        }
        for(int j=0; j<26; j++){
            if(v[j] == 1) cnt1++;
            else if (v[j] >=2){
                cnt2++;
            }
        }
        cout << (cnt1)/2 + cnt2 << endl;
        
    }
}
