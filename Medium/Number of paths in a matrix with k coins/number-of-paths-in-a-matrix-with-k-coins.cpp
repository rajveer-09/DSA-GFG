//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    
    long long dp[101][101][101];

    long long solve(int n,int k,int i,int j,vector<vector<int>>&arr){

       if(i>=n || j>=n||k<0) return 0;

       if(i==n-1 && j==n-1){

           if(k==arr[i][j]) return 1;

           return 0;

       }

       if(dp[i][j][k]!=-1) return dp[i][j][k];

       

       long long p1= solve(n,k-arr[i][j],i+1,j,arr);

       long long p2=solve(n,k-arr[i][j],i,j+1,arr);

      

       return dp[i][j][k]=p1+p2;

    }

    long long numberOfPath(int n, int k, vector<vector<int>> arr){

        memset(dp,-1,sizeof(dp));

     return solve(n,k,0,0,arr) ; 
        
    }
};

//{ Driver Code Starts.

int main()
{
    Solution obj;
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>k>>n;
        vector<vector<int>> v(n+1, vector<int>(n+1, 0));
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                cin>>v[i][j];
        cout << obj.numberOfPath(n, k, v) << endl;
    }
}
// } Driver Code Ends