//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

const int MOD = 1e9+7;
class Solution {
public:
    int fib(int n, vector<int>& dp) {
        if (n == 0 || n == 1) return n;
        if (dp[n] != -1) return dp[n];

        dp[n] = (fib(n - 1, dp)%MOD + fib(n - 2, dp)%MOD)%MOD;
        return dp[n];
    }

    int nthFibonacci(int n) {
        vector<int> dp(n + 1, -1);
        return fib(n, dp);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends