#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;
    int temp;
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    for(int j=0; j<n-1; j++){
        cout << v[j] << " ";
        if(v[j] < v[j+1]){
            temp = v[j] + 1;
            while (temp < v[j+1]){
                cout << temp << " ";
                temp ++ ;
            }
        }
        else {
            temp = v[j] - 1;
            while (temp > v[j+1]){
                cout << temp << " ";
                temp -- ;
            }
        }
        cout << 
    }

}