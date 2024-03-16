//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    const int MOD = 1e9 + 7;

    vector<int> Series(int n) {
        vector<int> fibonacci(n + 1);
        fibonacci[0] = 0;
        if (n > 0) {
            fibonacci[1] = 1;
            for (int i = 2; i <= n; ++i) {
                fibonacci[i] = (fibonacci[i - 1] + fibonacci[i - 2]) % MOD;
            }
        }
    return fibonacci;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends