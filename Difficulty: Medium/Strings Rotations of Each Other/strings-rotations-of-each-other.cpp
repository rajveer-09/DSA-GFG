//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    // Function to compute the LPS array.
    void computeLPSArray(const string& pattern, vector<int>& lps) {
        int length = 0;
        int i = 1;
        lps[0] = 0; // lps[0] is always 0

        while (i < pattern.size()) {
            if (pattern[i] == pattern[length]) {
                length++;
                lps[i] = length;
                i++;
            } else {
                if (length != 0) {
                    length = lps[length - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }

    // KMP algorithm to check if pattern exists in text
    bool KMPSearch(const string& text, const string& pattern) {
        int N = text.size();
        int M = pattern.size();

        vector<int> lps(M, 0);

        computeLPSArray(pattern, lps);

        int i = 0; // index for text
        int j = 0; // index for pattern
        while (i < N) {
            if (pattern[j] == text[i]) {
                i++;
                j++;
            }

            if (j == M) {
                return true;
            } else if (i < N && pattern[j] != text[i]) {
                if (j != 0) {
                    j = lps[j - 1];
                } else {
                    i++;
                }
            }
        }

        return false;
    }

    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string& s1, string& s2) {
        if (s1.size() != s2.size()) return false;
        string temp = s1 + s1;
        return KMPSearch(temp, s2);
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1;
        string s2;
        cin >> s1 >> s2;
        Solution obj;
        cout << obj.areRotations(s1, s2) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends