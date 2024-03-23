//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  #define mod 1000000007;
    vector<int> Series(int n) {
        // Code here
        vector<int> fib(n+2);
        
        fib[0] = 0;
        fib[1] = 1;
        
        for(int i = 2; i <= n; i++) {
            fib[i] = (fib[i-1] + fib[i-2]) % mod;
        }
        return vector<int>(fib.begin(), fib.end() -1);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends