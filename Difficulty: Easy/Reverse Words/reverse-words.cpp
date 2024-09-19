//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
        // code here
         int n = str.length();
        int i = n-1;
        int len = 0;
        
        string ans = "";
        
        while(i >= -1)
        {
            if(i == -1 || str[i] == '.')
            {
                ans = ans + str.substr(i+1,len) + '.';
                len = 0;
            }
            else
            {
                len++;
            }
            
            i--;
        }
        
        return ans.substr(0,n);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.reverseWords(s) << endl;
    }
}
// } Driver Code Ends