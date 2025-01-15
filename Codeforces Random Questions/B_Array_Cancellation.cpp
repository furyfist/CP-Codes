#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc; cin >> tc; 
    while (tc--){
        int n; cin >> n;
        int arr[100000];
        int positive = 0; 
        int rem_negative = 0;

        for(int i=0; i<n; i++){
            cin >> arr[i];
        } 

        for(int j=0; j<n; j++){
            if(arr[j] >=0){
                positive+= arr[j];
            }
            else{
                if(positive >= abs(arr[j])){
                    positive -= abs(arr[j]);
                }
                else{
                    rem_negative+= (abs(arr[j]) - positive);
                    positive = 0;
                }
            }
        }
        cout << rem_negative << endl;
    }
}