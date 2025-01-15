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
        int n, m; 
        cin >> n >> m;
        int cnt = 0;
        int arr[n];

        for(int i=0; i<n; i++){
            string s; cin >> s;
            arr[i] = s.size();
        }
        for(int j=0; j<n; j++){
            if((m - arr[j]) >= 0){
                m-=arr[j];
                cnt++;
            }
            else{
                break;
            }
        }
        cout<< cnt << endl;
    }
}
