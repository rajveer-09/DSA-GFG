//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int memo(vector<int>& arr, int idx, int k, std::vector<std::vector<int>>& dp) {
        int n = arr.size();
        if (k == 0 && idx == n) return 1;
        if (idx >= n) return 0;
        
        if (dp[idx][k] != -1) return dp[idx][k];
        
        int inc = memo(arr, idx + 1, k ^ arr[idx], dp);
        int exc = memo(arr, idx + 1, k, dp);
        
        return dp[idx][k] = inc + exc;
    }
    int subsetXOR(vector<int> arr, int n, int k) {
        // code here
        vector<vector<int>> dp(n, vector<int>(1025, -1));
        
        return memo(arr, 0, k, dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.subsetXOR(v,N,K) << endl;
    }
    return 0; 
}
// } Driver Code Ends