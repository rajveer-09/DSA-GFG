//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int lps(string str) {
        // Your code goes here
        int n= str.length();
        int i=0, k=0, j=1, c=0;
        while(i<n && j<n){
            if(str[i]==str[j]){
                i++;
                j++;
                c++;
            }
            else{
                i=0;
                k++;
                j=k;
                c=0;
            }
        }
        
        return c;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;

        Solution ob;

        cout << ob.lps(str) << "\n";
    }

    return 0;
}

// } Driver Code Ends