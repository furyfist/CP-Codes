#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int n = s.length();
    int left = 0, right = n - 1;
    int ops = 0;

    while (left < right) {
        if (s[left] == s[right]) {
            left++;
            right--;
        } else if (s[left] == '0') {
            left++;
            ops++;
        } else {
            right--;
            ops++;
        }
    }

    return ops;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        cout << solve(s) << "\n";
    }

    return 0;
}