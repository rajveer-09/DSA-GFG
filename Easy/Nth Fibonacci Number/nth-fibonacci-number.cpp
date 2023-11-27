//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        int n1=1,n2=1,ans=-1,n3;
        if(n==2 || n==1)
        {
            return 1;
        }
    for(int i=2;i<n;i++)
    {
        n3=(n1+n2)%1000000007;
        ans=n3;
        n1=n2;
        n2=n3;
      
    }
    return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends