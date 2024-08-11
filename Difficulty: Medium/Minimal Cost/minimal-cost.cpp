//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimizeCost(vector<int>& arr, int& k) {
        // Code here
        int n=arr.size();
        vector<int> dp(k, 0);
        for(int j=1;j<n;j++)
        {
            int a=1e9+7;
            for(int i=1;i<k+1;i++)
            {
                if(j>=i)
                {
                    a=min(a, (dp[i-1]+abs(arr[j]-arr[j-i])));
                }
                else
                {
                    break;
                }
            }
            for(int i=k-1;i>0;i--)
            {
                dp[i]=dp[i-1];
            }
            dp[0]=a;
        }
        return dp[0];
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