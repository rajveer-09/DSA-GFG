//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:
    int maxCoins(int N, vector<int> &arr) {
        // code here
          arr.push_back(1);
    arr.insert(arr.begin(), 1);
    int n= arr.size();
    vector<vector<int>> dp(n, vector<int> (n, 0));

    for(int i = n-2; i>=1; i--){
        for(int j = i; j<=n-2; j++){
                int maxi = INT_MIN;
    for(int k = i ; k <= j ; k++){
        int cost = arr[i-1]*arr[k]*arr[j+1] + dp[i][k-1]+ dp[k+1][j];
        maxi = max(maxi, cost);
    }
     dp[i][j] = maxi;
        }
    }
    return dp[1][n-2];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends