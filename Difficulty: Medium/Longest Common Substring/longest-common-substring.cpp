class Solution {
  public:
    int longestCommonSubstr(string& s1, string& s2) {
        int n1= s1.size(), n2 = s2.size();
        
        vector<vector<int>> dp(n1, vector<int>(n2, 0));
        
        // dp[i][j] -> longest common substring start from i, j and before.
        
        int maxi = 0;
        
        for(int i = 0; i < n1; i++) {
            dp[i][0] = (s1[i] == s2[0]) ? 1 : 0;
            maxi = max(maxi, dp[i][0]);
        }
        for(int j = 0; j < n2; j++) {
            dp[0][j] = (s1[0] == s2[j]) ? 1 : 0;
            maxi = max(maxi, dp[0][j]);
        }
        
        for(int i = 1; i < n1; i++){
            for(int j = 1; j < n2; j++){
                if(s1[i] == s2[j]){
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    
                    maxi = max(maxi, dp[i][j]);
                }
            }
        }
        
        return maxi;
        
    }
};