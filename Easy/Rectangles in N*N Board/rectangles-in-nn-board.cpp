//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long rectanglesInChessBoard(long long n) {
        // code here
        return ((n*(n+1)/2)*(n*(n+1)/2)-(n*(n+1)*(2*n+1)/6));
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.rectanglesInChessBoard(N) << endl;
    }
    return 0;
}
// } Driver Code Ends