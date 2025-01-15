#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n; cin>>n;
    bool flag = false;
    if(n%4 ==0 || n%7 ==0 || n%44==0 || n%77==0 ||n%47==0 ||n%74==0 ||  n%444 ==0 || n%777 == 0 || n%447 ==0 ||n%474 ==0 ||n%744 ==0 ||n%774 ==0 ||n%747 ==0 ||n%477 ==0 ){
        flag = true;
    }
    else{
        flag = false;
    }
    
    if(flag){
        cout << "YES";
    }
    else cout << "NO";
}