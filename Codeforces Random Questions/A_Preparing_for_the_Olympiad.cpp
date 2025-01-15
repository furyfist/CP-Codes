#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<int>b(n+1);
        vector<int> ans(n);
        int sum=0;
        for(int j=0; j<n; j++){
            cin >> a[j];
        }
        for(int r=0; r<n ; r++){
            cin >> b[r];
        }
        b[n+1] = 0;

        for(int i=0; i<n; i++){
            ans[i] = a[i] - b[i+1];
            if(ans[i]>0){
                sum+=ans[i];
            }
        }
        cout << sum << endl;
    }
}