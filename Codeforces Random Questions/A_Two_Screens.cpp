#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
signed main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s; cin >> s;
        string t; cin >> t;
        int cnt = 0;
        int maxitr = max(s.size(),t.size());
        // have to improve the total itereations
        for (int i=0; i<maxitr; i++){

            if(s != t){
                if(s[i] == t[i] ) cnt ++;

                else if (i!=0) {
                    cnt += (s.size() - i + t.size() - i ) + 1;
                    break;
                }

                else {
                    cnt += (s.size() - i + t.size() - i ) ;
                    break;
                }
            } 

            else{
                cnt = s.size() + 1;
            }
        }   
        cout << cnt << endl;
    }
}