//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
   int fn(int i, vector<int> &cost, int total, vector<vector<int>>&dp){
        if(i==cost.size()) return 0;
        if(dp[i][total]!=-1) return dp[i][total];
        int ans = fn(i+1,cost,total,dp);
        if(cost[i]<=total) ans = max(ans,1+fn(i+1,cost,total-cost[i]+cost[i]*9/10,dp));
        return dp[i][total] = ans;
    }
    
    public:
    int max_courses(int n, int total, vector<int> &cost){
        vector<vector<int>> dp(n, vector<int>(total + 1, -1));
        return fn(0,cost,total,dp);
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
        int k;
        cin>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        Solution ob;
        cout<<ob.max_courses(n,k,arr)<<endl;
    }
}
// } Driver Code Ends