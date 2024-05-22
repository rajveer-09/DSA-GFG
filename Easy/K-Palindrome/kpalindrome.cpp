//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int solve(string& s, string& revs, vector<vector<int>>& dp, int n, int m){
        if(n == 0 || m == 0) return 0;
        
        if(dp[n][m]!=-1) return dp[n][m];
    
        
        if(s[n-1] == revs[m-1]){
            return dp[n][m] = 1 + solve(s, revs, dp, n-1, m-1);
        }
        
        int ans = max(solve(s, revs, dp, n-1, m),solve(s, revs, dp, n, m-1));
        return dp[n][m] = ans;
    }
public:
    int kPalindrome(string str, int n, int k)
    {
        // int n = str.length();
    
        string revstr = str;
        reverse(revstr.begin(), revstr.end());
        vector<vector<int>> dp(n+1, vector<int>(n+1, -1));
        int len = solve(str, revstr, dp, n, n);
    
        if(len >= n-k) return true;
        return false;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.kPalindrome(str, n, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends