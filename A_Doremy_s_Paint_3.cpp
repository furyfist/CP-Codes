#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--) {
        int n; cin >> n; bool flag = 0;
        vector<int> v(n);
        set<int> s; int cnt1=0,cnt2=0;
        // need to satisfy two conditons  1. only 2 uniques or 1 unique number in vector; 2. both numbers must be equal or there differece is 1;        
        for(int i=0; i<n; i++){
            cin >> v[i];
            s.insert(v[i]);
        }

        for(int j=0; j<n; j++){
            if(v[j] == v[0]) cnt1 ++;
            else cnt2 ++;
        }

        if (s.size() == 1 || s.size() == 2){
            if(abs(cnt1- cnt2) == 1 || cnt1-cnt2 == 0){
                flag = 1;
            } else if(cnt2 ==0) {
                flag = 1;
            }
        }

        (flag ? cout <<"Yes" : cout <<"No");
        cout << endl;

    }
}
