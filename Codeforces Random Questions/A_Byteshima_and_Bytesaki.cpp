#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, r1, r2;
        cin >> n >> m >> r1 >> r2;

        int minSum = INT_MAX;
        bool found = false;

        for (int x1 = r1; x1 <= n - r1; x1++) {
            for (int y1 = r1; y1 <= m - r1; y1++) {
                for (int x2 = r2; x2 <= n - r2; x2++) {
                    for (int y2 = r2; y2 <= m - r2; y2++) {
                        if (abs(x1 - x2) + abs(y1 - y2) >= r1 + r2) {
                            minSum = min(minSum, x1 + x2 + y1 + y2);
                            found = true;
                        }
                    }
                }
            }
        }

        if (found) {
            cout << minSum << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}