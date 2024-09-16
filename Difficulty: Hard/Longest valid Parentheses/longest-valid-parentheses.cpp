//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maxLength(string& str) {
        // code here
        int ans=0,op=0,cl=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='(') op++;
            else cl++;
            if(cl>op) op=cl=0;
            if(cl==op) ans=max(ans,cl*2);
        }
        op=cl=0;
        for(int i=str.length()-1;i>=0;i--)
        {
            if(str[i]=='(')op++;
            else cl++;
            if(cl<op) op=cl=0;
            if(cl==op) ans=max(ans,cl*2);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.maxLength(S) << "\n";
    }
    return 0;
}
// } Driver Code Ends