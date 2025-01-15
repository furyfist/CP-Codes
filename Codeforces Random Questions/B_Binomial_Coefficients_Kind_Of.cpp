#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
// Removed #define int long long to avoid potential issues

const long long MOD = 1e9 + 7;

long long power(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {  // Changed back to int main()
    int tc;
    cin >> tc;
     
    vector<long long> ni(tc);  // Preallocate space for tc elements
    vector<long long> ki(tc);  // Preallocate space for tc elements

    for(int i = 0; i < tc; i++){
        cin >> ni[i];
    }

    for(int j = 0; j < tc; j++){
        cin >> ki[j];
    }
    
    for(int h = 0; h < tc; h++){
        long long result = power(2, ki[h], MOD);
        cout << result << endl;
    }    

    return 0;
}