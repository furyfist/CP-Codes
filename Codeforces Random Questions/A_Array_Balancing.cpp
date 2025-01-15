#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; cin >> tc;
    vector<int>a;
    vector<int>b;
    int input,input2;
    int asub;
    int bsub;
   
    while (tc--){
        int sum = 0;
        int n; cin >> n;
        for(int i=0; i<n; i++){
            cin >> input;
            a.push_back(input);
        }
        for(int j=0;j<n; j++){
            cin >> input2;
            b.push_back(input2);
        }

        for(int k=1; k<n; k++){
            asub = abs(a[k] - a[k-1]);
            asub = abs(a[k] - b[k]);
            bsub = abs(b[k] - b[k-1]);
            if(asub > )
        }
        
    }
}
    
