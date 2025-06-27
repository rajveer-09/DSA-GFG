class Solution {
public:
    int solve(int n, int k, vector<int>& dp){
        if(n == 1) return k;
        if(n == 2) return k * k;

        if(dp[n] != -1) return dp[n];

        return dp[n] = (solve(n -2, k, dp) + solve(n - 1, k, dp)) * (k - 1);
    }
    int countWays(int n, int k) {
        // Your code goes here
        vector<int> dp(n + 1, -1);

        return solve(n, k, dp);
    }
};