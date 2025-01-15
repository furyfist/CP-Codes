#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--){
        int n; cin >> n;
        int arr[n];
        vector<int>cnt(1000,0);
        
        for(int i=1; i<=n; i++){
            cin >> arr[i];
            cnt[arr[i]]++;
        }     

        int mexa = 0;
        while(cnt[mexa] >= 2) mexa++;

        int mexb =0; 
        while(cnt[mexb] >=1) mexb++;

        cout << mexa + mexb << endl;
    }
}