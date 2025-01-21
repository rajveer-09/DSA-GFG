//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    long long getVol(int A, int B) {
        // code here
        double l=(A-sqrt((A*A)-(24*B)))/12;
        double v=l*((B/2.0)-l*(A/4.0-l));
        
        return 1ll*v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A,B;
        
        cin>>A>>B;

        Solution ob;
        cout << ob.getVol(A,B) << endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends