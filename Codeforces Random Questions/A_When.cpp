#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n ;cin >> n;
    if(n>=60){
        int rem1 = n-60;
        if(rem1 < 10){
            cout << "22:" << "0" <<rem1; 
         }
        else {
            cout <<"22:" << rem1;
        }
    }
    else {
        if(n < 10){
            cout << "21:" << "0" <<n;
        }
        else {
            cout <<"21:" << n;
        }
    }
}