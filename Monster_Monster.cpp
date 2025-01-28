#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
	// your code goes here
    int tc; cin >> tc;
    while (tc--){
        int n,x; cin >> n >> x;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int initial_largest = v[n-1];
        int final_largest = v[0] + (n-1)*x;
        
        if(initial_largest > final_largest){
            cout << initial_largest << endl;
        } else {
            cout << final_largest << endl;
        }
    }
}
