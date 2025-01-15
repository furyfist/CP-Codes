#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; 
    cin >> tc; 
    while (tc--) {
        int n; cin >> n;
        int onecount = 0;
        int greaterone = 0;
        vector<int> colour(n+1);
        for(int i=1; i<=n;i++){
            cin >> colour[i];
        }
        vector<int> occurance(n+1,0);
        for(int j=1; j<=n; j++){
            occurance[colour[j]]++;
        }
        for(int k=1; k<=n; k++){
            if(occurance[k] == 1) onecount++;
            else {
                greaterone++;
            }
        }
        cout << onecount + greaterone << endl;
    }
}
