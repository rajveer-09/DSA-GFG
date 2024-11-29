//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
public:
    string addBinary(string& s1, string& s2) {
        string res = "";
        int i = s1.size() - 1, j = s2.size() - 1, c = 0;

        while (i >= 0 || j >= 0 || c > 0) {
            int ones = c;
            if (i >= 0 && s1[i] == '1') ones++;
            if (j >= 0 && s2[j] == '1') ones++;
            res += (ones % 2 == 0 ? '0' : '1');
            c = ones / 2;
            i--; j--;
        }

        reverse(res.begin(), res.end());

        int idx = 0;
        while (idx < res.size() && res[idx] == '0') {
            idx++;
        }

        return idx == res.size() ? "0" : res.substr(idx);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string A, B;
        cin >> A >> B;
        Solution ob;
        cout << ob.addBinary(A, B);
        cout << "\n";

        cout << "~"
             << "\n";
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends