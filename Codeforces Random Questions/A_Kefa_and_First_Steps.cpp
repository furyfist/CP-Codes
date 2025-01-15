#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int n; cin >> n;
    int arr[n];
    int count = 1;
    int maxi = 1;  
    for(int j = 0; j < n; j++){
        cin >> arr[j];
    }
    
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] <= arr[i + 1]) {
            count++;
        } else {
            maxi = max(count, maxi);
            count = 1;  
        }
    }
    maxi = max(count, maxi); 
    cout << maxi << endl;
}
