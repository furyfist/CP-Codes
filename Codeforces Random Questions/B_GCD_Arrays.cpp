#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int tc; 
    cin >> tc;
    int totalele;
    int totalOdd;
    bool flag;
    while (tc--) {
        int L, R, K;
        cin >> L >> R >> K;
        if(L==R)
            (L==1) ? (cout << "NO") : (cout << "YES");
        else
        {
            int count;
            if(L%2==0 && R%2==0) count = (R-L)/2;
            else if(L%2 && R%2) count = (R-L)/2 + 1;
            else count = (R-L+1)/2;
            (count<=K) ? (cout << "YES") : (cout << "NO");
        }
        cout << endl;
    }
    return 0;
    

}
