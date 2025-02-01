#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

int f(string s, char a, char b, char c){
    int cnt = 0;
    int n = s.size();
    for(int i=0; i<n; i+=3){
        if(s[i] != a){
            cnt++;
        }
    }    
    for(int i=1; i<n; i+=3){
        if(s[i] != b){
            cnt++;
        }
    }
    for(int i=2; i<n; i+=3){
        if(s[i] != c){
            cnt++;
        }
    }
    return cnt;
}

signed main() {
    int tc; cin >> tc; 
    while (tc--) {
        int n; cin >> n;
        string s; cin >> s;
        // initialised the cnt with one of the permutaiton.
        int cnt = f(s,'R','G','B');
        // out of all 6 permutation, picked the minimum.
        cnt = min(cnt, f(s,'G','B','R'));
        cnt = min(cnt, f(s,'B','G','R'));
        cnt = min(cnt, f(s,'R','B','G'));
        cnt = min(cnt, f(s,'B','R','G'));
        cnt = min(cnt, f(s,'G','R','B'));

        cout << cnt << endl;
    }
}
