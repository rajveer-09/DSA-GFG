//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int ways(int x, int y)
    {
        //code here.
        vector<vector<int>>dp(x+1,vector<int>(y+1));
        dp[0][0]=1;
        int mod= 1000000007;
        for(int i=0;i<=x;i++){
            for(int j=0;j<=y;j++){
                if(i>0)dp[i][j]=dp[i-1][j];
                if(j>0)dp[i][j]+=dp[i][j-1];
                dp[i][j]%=mod;
            }
        }
        return dp[x][y];
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<<ob.ways(x,y)<<endl;
    }
	return 0;
}

// } Driver Code Ends