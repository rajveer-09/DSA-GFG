//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    
    int helper(int coins[],int i,int N,int sum,vector<vector<int>> &dp){
        if(i==N){
            if(sum && (sum%20==0 || sum%24==0 || sum==2024)){
                return 1;
            }
            return 0;
        }
         if(sum && (sum%20==0 || sum%24==0 || sum==2024)){
                return 1;
            }
            if(dp[i][sum]!=-1) return dp[i][sum];
            int take=helper(coins,i+1,N,sum+coins[i],dp);
            int notTake=helper(coins,i+1,N,sum,dp);
        return dp[i][sum]=take|notTake;
    }
    
    public:
    int isPossible(int N , int coins[]) 
    {
        vector<vector<int>> dp(N,vector<int>(2025,-1));
        return helper(coins,0,N,0,dp);
    }
    
};




//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int coins[N];
        for(int i=0 ; i<N ; i++)
            cin>>coins[i];

        Solution ob;
        cout << ob.isPossible(N,coins) << endl;
    }
    return 0;
}
// } Driver Code Ends