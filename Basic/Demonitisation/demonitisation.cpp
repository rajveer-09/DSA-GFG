//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string demonitize(string S, string m, string n) {
        // code here
          int len1 = m.length();
        int len2 = n.length();
        while(S.find(m) != string::npos)
        {
            size_t index1 = S.find(m);
            S.erase(S.begin()+index1 , S.begin()+index1+len1);
        }
        while(S.find(n) != string::npos)
        {
            size_t index2 = S.find(n);
            S.erase(S.begin()+index2 , S.begin()+index2+len2);
        }
        if(S.empty() || S.length()==1)
            return "-1";
        return S ;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, m, n;

        cin >> S;
        cin >> m;
        cin >> n;

        Solution ob;
        cout << ob.demonitize(S, m, n) << endl;
    }
    return 0;
}
// } Driver Code Ends