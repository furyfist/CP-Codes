#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--){
        int n; cin >> tc;
        int odd = n-5;
        int even = n-2;
        if(n==1 || n==3) {
            cout << "-1" << endl;
        }
        else if(n%2==0){
            for(int i=0; i<even; i++){
                cout<< "3";
            }
            cout <<"66"<<endl;
        }
        else{
            for(int j=0; j<odd; j++){
                cout << "3";
            }
            cout << "36366"<<endl;
        }
    }
}
