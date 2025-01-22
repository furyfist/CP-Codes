#include <bits/stdc++.h>
using namespace std;

int solve (int n){
    if(n <= 0) {
        return 0;
    }
    return solve(n-1) + n;
}

int main (){
    int n = 10;
    int ans = solve (n);
    cout << ans;
}
