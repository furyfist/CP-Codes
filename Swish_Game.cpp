#include <bits/stdc++.h>
using namespace std;


int main() {
	// your code goes here
    int tc; cin>>tc;
    while(tc--){
        int m,k; cin >> m >> k;
        string s ; cin >> s;
        int swiss=0, pass=0;
        for(int i=0; i<s.size() ; i++){
            if(s[i] == 'S') swiss++;
            else{
                pass++;
            }
        }
        if(swiss >= k){
            cout << m << endl;
        } else {
            cout << (k-swiss - 1) + m << endl;
        }

    }
}
