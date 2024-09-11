//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    const int mod = 1e9+7;

    long long memo(int n, vector<long long>& dp) {
        if (n <= 1) return 1;

        if (dp[n] != -1) return dp[n];
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            ans = (ans + (memo(i, dp) % mod * memo(n - i - 1, dp) % mod) % mod) % mod;
        }

        return dp[n] = ans;
    }

    // Function to find the nth Catalan number.
    int findCatalan(int n) {
        vector<long long> dp(n + 1, -1);

        if (n <= 1) return 1;

        return memo(n, dp);
    }
};



//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends