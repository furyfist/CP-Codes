#include <bits/stdc++.h>
using namespace std;

int two(int n, vector<int> v) {
    for(int i=0; i<n; i++){
        if(v[i]%2 == 0){
            return 0;
        }
    }
    return 1;
}
int three (int n, vector<int> v){
    int mini = INT_MIN;
    for(int i=0; i<n; i++){
        if(v[i]%3 == 0) return 0;
        else {
            mini = max(mini, v[i]%3);
        }
    }
    return (3 - mini);
}

int four(int n, vector<int> v){
    int even = 0;
    int mini = INT_MIN;
    for(int i=0; i<n; i++){
        if(v[i]%2 == 0) even++;
        if(even == 2 || v[i]%4 == 0) return 0;
        else {
            mini = max(mini, v[i]%4);
        }
    }
    
    if(n==1){
        return (4-mini);
    } else if(even == 0) {
        return (4-mini);
    } else {
        return 1;
    }
}

int five(int n, vector<int> v){
    int mini = INT_MIN;
    for(int i=0; i<n; i++){
        if(v[i]%5 == 0){
            return 0;
        }
        else{
            mini = max(mini, v[i]%5);
        }
    }
    
    return (5-mini);
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--) {
        int n,k; cin >> n >> k;
        // K can be 2,3,4,5
        // (2,4) and (3,5)
        vector <int> v(n);
        for(auto &it : v) cin >> it;
        int ans = 67;
        if(k==2){
            ans = two(n,v);
        } else if(k == 3){
            ans = three(n,v);
        } else if(k==4){
            ans = four(n,v);
        } else{
            ans = five(n,v);
        }
        cout << ans <<  endl;
        
    }   
}
