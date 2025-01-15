#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void SieveOfEratosthenes(int n){
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
            prime[i] = false;
        }
    }
}

signed main() {

    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    
}
