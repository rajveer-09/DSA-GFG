//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool fun(vector<int>& arr, int idx, int target, vector<vector<int>>& dp) {
        // If the target is achieved
        if (target == 0) return true;

        // If no elements are left or target becomes negative
        if (idx < 0 || target < 0) return false;

        // Check if the result is already calculated
        if (dp[idx][target] != -1) return dp[idx][target];

        // Include the current element
        bool inc = fun(arr, idx - 1, target - arr[idx], dp);

        // Exclude the current element
        bool exc = fun(arr, idx - 1, target, dp);

        // Store and return the result
        return dp[idx][target] = (inc || exc);
    }
    
    bool isSubsetSum(vector<int>arr, int target){
        // code here 
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(target + 1, -1));

        return fun(arr, n - 1, target, dp);
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