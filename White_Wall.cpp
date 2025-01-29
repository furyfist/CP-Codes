#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc; 
    cin >> tc;
    
    while (tc--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = 0;
        set<char> seti; 

        // starting 3 are RGB
        seti.insert(s[0]);
        seti.insert(s[1]);
        seti.insert(s[2]);

        cnt += (3-seti.size());

        
        for (int i = 0; i <= n - 3; i++) {  
            
            for (int j = i; j < i + 3; j++) {
                seti.insert(s[j]);
            }
            
            cnt += (3 - seti.size());  
        }

        cout << cnt << endl;  
    }
}
