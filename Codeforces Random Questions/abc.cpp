#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; 
    int arr[n+1];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int newpos; cin >> newpos;
    int newele ; cin >> newele;
    for(int i=newpos; i< n+1; i++ ){
        arr[newpos] = 1;
    }
}