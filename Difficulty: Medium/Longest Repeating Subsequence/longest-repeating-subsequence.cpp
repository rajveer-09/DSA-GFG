
class Solution {
public:
    int dp[1001][1001];
    int solve(string &s, int i, int j) {
        int n = s.size();
        
        if (i == n || j == n) return 0;
        
        if (dp[i][j] != -1) return dp[i][j];
        
        int ans = 0;
        
        if (s[i] == s[j] && i != j) {
            ans = 1 + solve(s, i+1, j+1);
        } 
        else {
            ans = max(solve(s, i+1, j), solve(s, i, j+1));
        }
        return dp[i][j] = ans;
    }
    
    /* means lCS nikalo string ka khud hi ke saath bs equality 
    waale case me dono same index ko point na kr rhe ho ... */
    int LongestRepeatingSubsequence(string &s) {
        memset(dp, -1, sizeof(dp));
        return solve(s, 0, 0);
    }
};
