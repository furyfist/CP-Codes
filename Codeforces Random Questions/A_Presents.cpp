#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int nums[n+1];
    for(int i=1; i<=n; i++){
        cin >> nums[i];
    }
    for(int j=1; j<=n; j++){
        for(int k=1; k<=n; k++){
            if(nums[k] == j){
                cout << k << " ";
            }
        }
    }
}

