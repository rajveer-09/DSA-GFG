//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
        if(s>9*d) return "-1";
        string res(d,' ');
        // putting 1 in the begining
        s--;
        for(int i=d-1;i>=1;i--){
            int diff=min(9,s); // appending 9 in end or req sum
            res[i]='0'+diff;
            s-=diff;
        }
        
        res[0]='1'+s;
        return res;
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
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends