//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int minimizeCost(vector<int>& arr, int& k) {
        // Code here
        int n = arr.size();
        
        vector<int> dp(n+1, INT_MAX);
        dp[0]=0;
        dp[1]=abs(arr[0]-arr[1]);
        
        if(n<=2) return dp[n-1];
        
        for(int i=2;i<n;i++){
            
            for(int j=1;j<=k;j++){
                
                if(i-j>=0){
                    
                    int x = dp[i-j] + abs(arr[i-j]-arr[i]);
                    
                    dp[i]=min(dp[i], x);
                }
                else break;
            }
        }
        
        return dp[n-1];
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minimizeCost(arr, k);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends