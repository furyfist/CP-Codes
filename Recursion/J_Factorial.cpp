#include <bits/stdc++.h>
using namespace std;
long long factorial(int n){
    if(n==0 || n==1) return 1;
    return factorial(n-1) * n;
}

int main (){
    int n; cin >> n;
    cout << factorial(n);
}