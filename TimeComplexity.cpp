#include <bits/stdc++.h>
using namespace std;

void recurse1(int n){
    if(n==0) return;
    recurse1(n-1);
}

void recurse2 (int n){
    if(n==0) return;
    recurse2(n-1);
    recurse2(n-1);
}

void recurse3 (int n){
    if (n==0) return;
    recurse3(n/2);
}

void recurse4(int n) {
    if (n == 0) return;
    recurse4(n/2);
    recurse4(n/2);
}

int main (){
    int n = 10;
    recurse1 (n); // T.C : O(n)
    recurse2 (n); // T.C : O(2^n)
    recurse3 (n); // T.C : O(log(n))
    recurse4 (n); // T.C : O(2^log(n))
}

