#include <iostream>
#include <vector>
#include <string>

using namespace std;

void constructByteSequence(int t, vector<int>& testCases) {
    for (int n : testCases) {
        vector<int> A(n);
        A[n - 1] = n; // Set An = n
        long long current_sum = n; // Initialize current_sum with An

        // Fill the sequence from An-1 down to A1
        for (int i = n - 2; i >= 0; --i) {
            A[i] = 1; // Set Ai = 1
            current_sum += A[i]; // Update current_sum
        }

        // Print the result for this test case
        for (int i = 0; i < n; ++i) {
            cout << A[i] << (i == n - 1 ? "" : " ");
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    vector<int> testCases(t);
    
    for (int i = 0; i < t; ++i) {
        cin >> testCases[i];
    }

    constructByteSequence(t, testCases);
    
    return 0;
}