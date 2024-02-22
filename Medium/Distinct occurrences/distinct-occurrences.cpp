//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    public:
    int subsequenceCount(string s, string t)
    {
      //Your code here
       int n=s.length(),m=t.length();
      int mod=1e9+7;
      vector<vector<int>>dp(n+1,vector<int>(m+1,0));
      for(int i=0;i<n;i++)dp[i][0]=1;
      for(int i=1;i<=n;i++){
          for(int j=1;j<=m;j++){
              if(s[i-1]==t[j-1])dp[i][j]=dp[i-1][j-1];
              dp[i][j]=(dp[i][j]+dp[i-1][j])%mod;
          }
      }
      return dp[n][m];
    }
};
 


//{ Driver Code Starts. 

//  Driver code to check above method
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string tt;
		cin>>s;
		cin>>tt;
		
		Solution ob;
		cout<<ob.subsequenceCount(s,tt)<<endl;
		
		
	}
  
}
// } Driver Code Ends