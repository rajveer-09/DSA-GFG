//{ Driver Code Starts
/* Driver program to test above function */

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int minChar(string& s) {
        string rev_s = string(s.rbegin(), s.rend());
        string temp = s + "#" + rev_s;
        int n = temp.length();
        vector<int> lps(n, 0);
        
        for (int i = 1; i < n; i++) {
            int len = lps[i - 1];
            while (len > 0 && temp[i] != temp[len]) {
                len = lps[len - 1];
            }
            if (temp[i] == temp[len]) {
                len++;
            }
            lps[i] = len;
        }
        
        return s.length() - lps[n - 1];
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        int ans = ob.minChar(str);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends