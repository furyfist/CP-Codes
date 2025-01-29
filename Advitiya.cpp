#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int tc; cin>>tc;
    while(tc--){
        string given = "ADVITIYA";
        string inp; cin >> inp;
        int cnt = 0;

        for(int i=0; i<8; i++){
            int sub = given[i] - inp[i];
            if(sub >=0){
                cnt += (sub);
            } else {
                cnt += (26 + sub);
            }
        }
        cout << cnt << endl;
    }
}
