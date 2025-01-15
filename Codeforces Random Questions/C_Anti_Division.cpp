#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int a,b,c,d; cin >> a >> b >> c >> d;
    int totalcount = (b-a) + 1;
    for (int i = a ; i <= b ; i++){
        if (i%c == 0 || i%d == 0){
            totalcount--;
        }
    }
    cout << totalcount << endl;
}
