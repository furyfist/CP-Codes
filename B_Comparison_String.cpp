#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int left =1;
        int maxi = 0;
        for(int i=1;i <n; i++){
            if(s[i] == s[i-1]) left++;
            else {
                maxi = max(maxi,left);
                left = 1;
            }
        }
        maxi = max(maxi,left);
        cout <<maxi+1 << endl;
    }
}