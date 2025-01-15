#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--){
        string s1, s2, opt; cin >> s1 >> opt >> s2;
        int num1 = s1[0] - 48;
        int num2 = s2[0] - 48;
        if( num1 > num2 && opt == ">") {
            cout << s1 << opt << s2;
        }
        if( num1 < num2 && opt == "<") {
            cout << s1 << opt << s2;
        }
        if( num1 == num2 && opt == "=") {
            cout << s1 << opt << s2;
        }

        
    }
}
