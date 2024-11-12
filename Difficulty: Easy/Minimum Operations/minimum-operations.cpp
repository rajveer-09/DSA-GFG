//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int minOperation(int n) {
        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;
        queue<int> q;
        q.push(0);
        
        while (!q.empty()) {
            int curr = q.front();
            q.pop();
            
            if (curr + 1 <= n && dp[curr + 1] > dp[curr] + 1) {
                dp[curr + 1] = dp[curr] + 1;
                q.push(curr + 1);
            }
            
            if (curr * 2 <= n && dp[curr * 2] > dp[curr] + 1) {
                dp[curr * 2] = dp[curr] + 1;
                q.push(curr * 2);
            }
        }
        
        return dp[n];
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    
cout << "~" << "\n";
}
}
// } Driver Code Ends