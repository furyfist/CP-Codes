#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, f, k;
    cin >> n >> f >> k;

    int arr[n];
    for (int i=0; i<n; i++){ // took input elements in array
        cin >> arr[i];
    }
    int favElement = arr[f-1];
    sort(arr ,arr + n , greater<int>()); // sort in decending
    if(arr[k-1] > favElement){
        cout << "NO" << endl;
    }
    else if(arr[k-1] < favElement){
        cout << "YES" << endl;
    }
    else if(arr[k-1] == favElement){

        if(k<n && arr[k] ==  favElement) cout <<"MAYBE" << endl;
        else cout << "YES" << endl;
    }
    }
}
