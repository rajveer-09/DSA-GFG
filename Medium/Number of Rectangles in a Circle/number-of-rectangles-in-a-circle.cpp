//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int rectanglesInCircle(int R) {
        // code here
         int l=1,b=1,cnt=0;
        // cin>>r;
        while(l*l+b*b<=4*R*R){
            while(l*l+b*b<=4*R*R){
                cnt++;
                b++;
            }
            l++;
            b=1;
        }
        return cnt;
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
        int ans = ob.rectanglesInCircle(n);
        cout << ans << "\n";
    }
}
// } Driver Code Ends