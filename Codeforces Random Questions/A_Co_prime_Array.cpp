#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int n; cin >> n;
    vector<int>arr;
    int input;
    int count = 0;
    for(int i=0; i<n; i++){
        cin >> input;
        arr.push_back(input);
    }
    for(int j=0;j<arr.size() - 1; ){
        if(__gcd(arr[j],arr[j+1]) != 1){
            count++;
            arr.insert(arr.begin() + j+1, 1);
            j+=2;
        }
        else{
            j++;
        }
    }
    cout << count << endl;
    for(int k=0; k < arr.size(); k++){
        cout << arr[k] << " ";
    }
}
