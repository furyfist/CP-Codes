#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc; 
    cin >> tc; // Number of test cases
    while (tc--) {
        int n ;cin >> n;
        int cnt2 =0; int cnt3 =0; int sum = 0; bool flag = false;
        vector<int> arr;
        // breakdown n into single integer
        while(n>0){
            int m = n%10;
            arr.push_back(m);
            n = n/10;
        }
        // count occurance of 2&3
        for(int i=0; i<arr.size(); i++){
            sum+=arr[i];
            if(arr[i] == 3) cnt3++;
            if(arr[i] == 2) cnt2++; 
        }

        int rem = sum % 9;
        if(rem == 8 || rem == 6 || rem == 4 || rem == 2){
            if(rem == 8 && (cnt2 >3 || (cnt2 >1 && cnt3 >1))) flag = true;
            else if(rem == 6 && (cnt2>2 || cnt3>1)) flag = true;
            else if(rem == 4 && cnt2>1) flag = true;
            else if(rem ==2 && cnt2 >0) flag = true;
        }
        else{
            flag = false;
        }
        if(flag) {
            cout <<"YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


    }
}
