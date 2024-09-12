//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int memo(vector<vector<int>>& matrix, int idx, int prev, vector<vector<int>>& dp) {
        if (idx >= matrix.size()) return 0;
        
        if (dp[idx][prev + 1] != -1) return dp[idx][prev + 1];
        
        int ans = 0;
        
        for (int i = 0; i < 3; i++) {
            if (i != prev) {
                ans = max(ans, matrix[idx][i] + memo(matrix, idx + 1, i, dp));
            }
        }
        
        return dp[idx][prev + 1] = ans;
    }
      
    int maximumPoints(vector<vector<int>>& arr, int n) {
        vector<vector<int>> dp(n, vector<int>(4, -1));
        
        int ans = memo(arr, 0, -1, dp);
        
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends