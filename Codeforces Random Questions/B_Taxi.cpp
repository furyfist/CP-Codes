#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int n; cin >> n;
    int n1 =0,n2=0,n3=0,n4=0;
    int input;
    int taxi =0;
    for(int i=0; i<n;i++){
        cin>> input;
        if(input==1) n1++;
        else if(input==2) n2++;
        else if(input==3) n3++;
        else n4++;  
    }
    // case n4
    taxi = taxi + n4;
    // case n3
    if(n3<n1){
        taxi +=n3;
        n1=n1-n3;
    }
    if(n3>=n1){
        taxi +=n3;
        n1=0;
    }
    if(n3>0){
        taxi = taxi + n3;
        n3 = 0;
    }
    // case n2
    if(n2%2 ==0) {
        taxi += n2/2;
        n2=0;
    }
    if(n2%2 !=0){
        taxi += n2/2;
        n2 = n2%2;
    }
    int rem = n1 + n2*2;

    if(rem <= 4 && rem>0){
        taxi +=1;
        rem =0;
    }
    if(rem > 4){
        taxi = taxi + rem/4 + 1;
    }
    cout << taxi << endl;
}
