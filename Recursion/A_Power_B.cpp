#include <bits/stdc++.h>
using namespace std; 

// find a power b
int power(int a,int b){
    if(b==0) return 1;
    int ans = power(a,b/2);
    ans *= ans;
    if(b%2 == 1) return ans * a;
    return ans;
}

int main(){
    int a,b; 
    a = 2;b=4;
    cout << power(a,b);
}