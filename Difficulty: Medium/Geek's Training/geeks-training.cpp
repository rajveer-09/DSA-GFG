//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int fun(vector<vector<int>>& matrix, int n, int idx, vector<vector<int>>& dp) {
        if (n == 0) {
            return 0;
        }
        if (dp[n][idx] != -1) return dp[n][idx];

        int ans = 0;
        for (int i = 0; i < 3; i++) {
            if (i != idx) {
                ans = max(ans, matrix[n-1][i] + fun(matrix, n-1, i, dp));
            }
        }
        return dp[n][idx] = ans;
    }

    int maximumPoints(vector<vector<int>>& matrix, int n) {
        // Code here
        vector<vector<int>> dp(n + 1, vector<int>(4, -1));

        return fun(matrix, n, 3, dp); 
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