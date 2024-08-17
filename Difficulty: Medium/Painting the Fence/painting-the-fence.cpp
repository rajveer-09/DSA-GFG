//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends

const int mod = 1e9 + 7;

class Solution {
public:
    long long fun(int n, long long k, vector<long long>& dp) {
        if (n == 1) return k % mod;
        if (n == 2) return (k*k) % mod;
        
        if (dp[n] != -1) return dp[n];
        
        long long same = (fun(n - 1, k, dp) * (k - 1)) % mod;
        long long diff = (fun(n - 2, k, dp) * (k - 1)) % mod;
        
        long long result = (same + diff) % mod;
        
        dp[n] = result;
        return result;
    }

    long long countWays(int n, int k) {
        vector<long long> dp(n + 1, -1);
        return fun(n, k, dp);
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