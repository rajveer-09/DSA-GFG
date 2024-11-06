//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    // Function to check if a string can be obtained by rotating
    // another string by exactly 2 places.
    bool isRotated(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        
        if (n1 != n2 || n1 < 2) return false;
        
        
        string clockwise_rot = s1.substr(n1 - 2) + s1.substr(0, n1 - 2);
        
        string counterclockwise_rot = s1.substr(2) + s1.substr(0, 2);
        
        return (s2 == clockwise_rot || s2 == counterclockwise_rot);
    }
};



//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        string b;
        cin >> s >> b;
        cin.ignore();
        Solution obj;
        cout << (obj.isRotated(s, b) == 0 ? "false" : "true") << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends