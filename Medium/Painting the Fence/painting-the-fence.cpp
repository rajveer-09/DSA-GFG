//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends


#define MOD 1000000007

class Solution{
    public:
    long long add(long long a, long long b) {
        return (a%MOD + b%MOD)%MOD;
    }
    
    long long multi(long long a, long long b) {
        return ((a%MOD) * (b%MOD))%MOD;
    }
    
    //recursion + memoization
    long long solveMem(int n, int k, vector<int> & dp) {
        
        if(n == 1) return k;
        
        if(n == 2) return add(k, multi(k, k-1));
        
        if(dp[n] != -1) return dp[n];
        
        return dp[n] = add(multi(solveMem(n-1, k, dp), k-1), multi(solveMem(n-2, k, dp), k-1));
    }
    
    //Tabulation
    long long solveTab(int n, int k) {
        
        vector<int> dp(n+1, 0);
        
        dp[1] = k;
        
        dp[2] = add(k, multi(k, k-1));
        
        for(int i=3; i<=n; ++i) {
            dp[i] = add(multi(dp[i-1], k-1), multi(dp[i-2], k-1));
        }
        return dp[n];
    }
    
    //Tabulation with space optimized
    long long solveTabSO(int n, int k) {
        
        long long prev2 = k;
        
        long long prev1 = add(k, multi(k, k-1));
        
        if(n == 1) return prev2;
        
        for(int i=3; i<=n; ++i) {
            long long ans = add(multi(prev1, k-1), multi(prev2, k-1));
            prev2 = prev1;
            prev1 = ans; 
        }
        
        return prev1;
    }
    
    long long countWays(int n, int k){
        // vector<int> dp(n+1, -1);
        // return solveMem(n, k, dp);
        
        return solveTabSO(n, k);
    }
};

//{ Driver Code Starts.

int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		Solution ob;
		cout<<ob.countWays(n,k)<<endl;
	}
	return 0;
}
// } Driver Code Ends