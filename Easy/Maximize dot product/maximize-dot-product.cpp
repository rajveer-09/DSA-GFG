//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int dp[1001][1001];
class Solution{
    int solve(int i, int j, int a[], int b[], int n, int m){
        if(i == n || j == m) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int diff = i - j;
        
        int res = 0;
        if(diff < n - m){
            res = max(a[i] * b[j] + solve(i + 1, j + 1, a, b, n, m), solve(i + 1, j, a, b, n, m));
        }else{
            res = a[i] * b[j] + solve(i + 1, j + 1, a, b, n, m);
        }
        
        return dp[i][j] = res;
    }
    public:
    
    int maxDotProduct(int n, int m, int a[], int b[]) 
    { 
        // Your code goes here
        memset(dp, -1, sizeof dp);
        return solve(0, 0, a, b, n, m);
    } 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int a[n], b[m];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

        for(int i = 0; i < m; i++)
        	cin >> b[i];

       

	    Solution ob;
	    cout << ob.maxDotProduct(n, m, a, b) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends