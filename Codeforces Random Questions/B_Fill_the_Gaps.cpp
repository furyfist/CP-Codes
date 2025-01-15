#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    vector<int> ip(n);
    vector<int> res;
    int input=0;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> input;
        ip.push_back(input);
    }
    for(int j=0; j<n; j++){
        if(ip[j] - ip[j+1] == 1 || ip[j+1] - ip[j] == 1){
            res.push_back(ip[j]);
        }
        else{
            if(ip[j] < ip[j+1]){
                // int diff = ip[j+1] - ip[j];
                for(int k=ip[j]; k<ip[j+1] ; k++ ){
                    res.push_back(k);
                }
            }
            else{
                for(int k=ip[j]; k>ip[j+1] ; k-- ){
                    res.push_back(k);
                }
            }
        }
    }
    for(int p=0; p < res.size(); p++){
        cout << res[p];
    }


}