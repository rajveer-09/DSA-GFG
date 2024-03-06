//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string longestSubstring(string s, int n) {
        // code here
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));
    string result = "";
    int maxLength = 0, endPos = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i+1; j <= n; j++) {
            // Check if characters match and we are not extending a repeating substring
            if (s[i-1] == s[j-1] && dp[i-1][j-1] < (j - i)) {
                dp[i][j] = dp[i-1][j-1] + 1;
                // Update result if this is the longest non-overlapping repeating substring found so far
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endPos = i;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    // If a repeating substring has been found, construct the result
    if (maxLength > 0) {
        result = s.substr(endPos - maxLength, maxLength);
    } else {
        result = "-1"; // Return "-1" if no repeating substring exists
    }

    return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        string S;

        cin >> N;
        cin >> S;

        Solution ob;
        cout << ob.longestSubstring(S, N) << endl;
    }
    return 0;
}
// } Driver Code Ends