#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n,a,b,c; cin >> n >> a >> b >> c;
        int day = 0;
        

        day = (n/(a+b+c))*3;
        n%=(a+b+c);

        if(n>0){
            n-=a; day++;
        }
        if(n>0) {
            n-=b; day++;
        }
        if(n>0){
            day++;
        }
        cout << day << endl;  
        
    }
}