//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int myAtoi(char *s) {
        while (*s == ' ') {
            s++;
        }
        
        int sign = 1;
        if (*s == '-' || *s == '+') {
            if (*s == '-') {
                sign = -1;
            }
            s++;
        }
        long long result = 0;
        while (*s >= '0' && *s <= '9') {
            result = result * 10 + (*s - '0');
            s++;
            
            if (result * sign >= INT_MAX) {
                return INT_MAX;
            }
            if (result * sign <= INT_MIN) {
                return INT_MIN;
            }
        }
        
        return result * sign;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        char s[20];
        cin >> s;
        Solution ob;
        int ans = ob.myAtoi(s);
        cout << ans << endl;
        cout << "~" << endl;
    }
}
// } Driver Code Ends