//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        int i=s.size()-1;
        while(i>=0&&s[i]!='0'){
            s[i]='0';
            i--;
        }
        if(i<0)s='1'+s;
        else s[i]='1';
        reverse(s.begin(),s.end());
        while(true){
            int n=s.size();
            if(s[n-1]=='0')s.pop_back();
            else break;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends