#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
// #define int long long

vector<int> sieve(int n) {
vector<bool> isPrime(n+1, true);
vector<int> primes;

isPrime[0] = isPrime[1] = false;

for (int i = 2; i * i <= n; i++) {
    if (isPrime[i]) {
        for (int j = i * i; j <= n; j += i) {
            isPrime[j] = false;
        }
    }
}

for (int i = 2; i <= n; i++) {
    if (isPrime[i]) {
        primes.push_back(i);
    }
}

    return primes;
}

signed main() {
ios::sync_with_stdio(false); 
cin.tie(NULL);

int tc; cin>>tc;

while(tc--){
int n; cin >> n; 
int m; cin >> m;

int arr[n][m];
int ans = 0;

// Assign values and print them
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        arr[i][j] = sieve(primes(ans));  // Example: simple value assignment
        ans++;
        cout << arr[i][j] << " ";
    }
    cout << endl;
}

}

}
