//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    bool memo(vector<int>& arr, int idx, int sum, vector<vector<int>>& dp) {
        // Base Case
        if (sum == 0) return true;
        if (idx >= arr.size() || sum < 0) return false;
        
        if (dp[sum][idx] != -1) return dp[sum][idx];
        
        bool inc = memo(arr, idx + 1, sum - arr[idx], dp);
        bool exc = memo(arr, idx + 1, sum, dp);
        
        return dp[sum][idx] = (inc || exc);
    }
    
    bool isSubsetSum(vector<int> arr, int sum) {
        // code here
        int n = arr.size();
        vector<vector<int>> dp(sum + 1, vector<int>(n, -1));
        
        return memo(arr, 0, sum, dp);
    }
};



//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends