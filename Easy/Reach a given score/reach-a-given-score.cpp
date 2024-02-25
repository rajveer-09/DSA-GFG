//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // Complete this function
    long long f(int ind, vector<int> & vals, long long n, vector<vector<int>> & dp){
        if(ind<0) return 0;
        if(n==0) return 1;
        
        if(dp[ind][n]!=-1) return dp[ind][n];
        
        int pick=0, notPick=0;
        
        if(vals[ind]<=n){
            pick=f(ind, vals, n-vals[ind], dp);
        }
        
        notPick=f(ind-1, vals, n, dp);
        
        return dp[ind][n] = pick+notPick;
    }
    
    long long int count(long long int n)
    {
        // Your code here
        vector<int> vals={3,5,10};
        vector<vector<int>> dp(3, vector<int>(n+1, -1));
        return f(2, vals, n, dp);
    	
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends