// Implementing 1D Prefix sum 
#include <bits/stdc++.h>
using namespace std;

void Prefix(int n, vector<int> v, int idx) {
    vector<int> pre(n, 0);
    pre[0] = v[0];
    for (int j = 1; j < n; j++) {  // Fix loop variable and start from j = 1
        pre[j] = pre[j - 1] + v[j];
    }
    if (idx >= 0 && idx < n) {    // Check for valid index
        cout << pre[idx] << endl;
    } else {
        cout << "Index out of range" << endl;
    }
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8};
    Prefix(8, v, 2);  // Print the prefix sum up to index 3
}
