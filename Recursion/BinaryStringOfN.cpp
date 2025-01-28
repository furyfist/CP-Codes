#include <bits/stdc++.h>
using namespace std; 

//  Generate a Binary String of A number N.
string Binary(int n){
    // base case 
    if(n ==  0) return "0";
    if(n == 1) return "1";

    // recursion step
    string ans = Binary(n/2);
        /*
        Both approach generates same things!
        
        if(!(n%2)){
            ans = ans + "0";
        } else {
            ans = ans + "1";
        }
        */
    ans = ans + to_string(n%2);

    return ans;

}

int main(){
    int n = 10;
    cout << Binary (n);
}