//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string S) {
        // code here
       int size=S.length();
       int i=0;
       char ch;
       while(i<size)
       {
           ch=S[i];
           if(ch>='A' && ch<='Z')
           {
               ch=ch-'A'+'a';
           }
           S[i]=ch;
           i++;
       }
       return S;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.toLower(S) << endl;
    }
    return 0;
}

// } Driver Code Ends