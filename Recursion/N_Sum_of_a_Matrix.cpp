#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    int r,c; cin >> r >> c;
    vector<vector<int>> A(r,vector<int>(c)),B(r,vector<int>(c)),ANS(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> A[i][j];
        }
    }
    for(int k=0;k<r;k++){
        for(int l=0;l<c;l++){
            cin >> B[k][l];
        }
    }
    for(int m=0;m<r;m++){
        for(int n=0;n<c;n++){
            ANS[m][n] = A[m][n] + B[m][n];
            cout << ANS[m][n] << " ";
        }
        cout << endl;
    }
    // there must me some better apparoach to solve this -> recursion
}
