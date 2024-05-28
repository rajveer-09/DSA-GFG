//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    int recur(int idx, int n, int w, vector<int> &cost , vector<vector<int>>&dp) {
        if (w == 0) {
            return 0;
        }
        if (idx >= n || w < 0) {
            return 1e9;
        }
        if(dp[idx][w] != -1) return dp[idx][w];
        
        int notake = recur(idx + 1, n, w, cost , dp);

        int take = 1e9;
        if (cost[idx] != -1 && w >= idx + 1) {
            take = cost[idx] + recur(idx, n, w - (idx + 1), cost , dp);
        }

        return dp[idx][w] = min(take, notake);
    }

    int minimumCost(int n, int w, vector<int> &cost) {
        
        vector<vector<int>>dp(n+1 , vector<int>(w+1 , -1));
        int result = recur(0, n, w, cost , dp);
        
        return result >= 1e9 ? -1 : result;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int w;
        scanf("%d", &w);

        vector<int> cost(n);
        Array::input(cost, n);

        Solution obj;
        int res = obj.minimumCost(n, w, cost);

        cout << res << endl;
    }
}

// } Driver Code Ends