#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while(tc--){
        int n; cin>>n;
        vector<int> v(n),copy(n);
        int mini = INT_MAX;
        int rem = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> v[i];
            copy [i] = v[i];
            if(i!=0){
                rem = v[i] - v[i-1];
            }
            mini = min(mini,rem);

        }
        sort(copy.begin(),copy.end());
        if(v != copy) {
            cout << "0" << endl;
        } else {
            cout << (mini/2) + 1 << endl;
        }
    }
}
