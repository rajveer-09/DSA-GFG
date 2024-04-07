//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//Function to find the maximum possible amount of money we can win.
class Solution{
    public:
    long long solve(int n, int arr[], int i, int j, vector<vector<int>> &dp){
        if(i>j) return 0;
        if(j<0) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        long long answer_1 = arr[i]+ min(solve(n, arr, i+1, j-1,dp), solve(n, arr,i+2, j,dp));
        long long answer_2 = arr[j] + min(solve(n, arr, i, j-2,dp), solve(n, arr, i+1,j-1,dp));
        return dp[i][j]=max(answer_1, answer_2);
    }
    long long maximumAmount(int n, int arr[]){
        // Your code here
        vector<vector<int>> dp(n+1, vector<int>(n+1,-1));
        return solve(n,arr, 0,n-1,dp);
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
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		cout<< ob.maximumAmount(n,a)<<endl;
	}
	return 0;
}
// } Driver Code Ends