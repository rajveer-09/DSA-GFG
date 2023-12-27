//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution{
     int f(int i,int j,string &s,string &p,vector<vector<int>>&dp)
    {
        if(i<0 and j<0) return true;
        if(i<0 and j>=0) return false;
        if(i>=0 and j<0)
        {
            for(int ind=0;ind<=i;ind++)
            {
                if(s[ind]!='*')
                {
                    return false;
                }
            }
            return true;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(s[i]==p[j] || s[i]=='?')
        {
            return dp[i][j]=f(i-1,j-1,s,p,dp);
        }
        if(s[i]=='*')
        {
            return dp[i][j]=f(i-1,j,s,p,dp) | f(i,j-1,s,p,dp);
        }
        return dp[i][j]=false;
    }
    public:
    bool match(string wild, string pattern)
    {
        int n=wild.size();
        int m=pattern.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        return f(n-1,m-1,wild,pattern,dp);
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        string wild, pattern;
        cin>>wild>>pattern;
        
        Solution ob;
        bool x=ob.match(wild, pattern);
        if(x)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    return 0;
}
// } Driver Code Ends