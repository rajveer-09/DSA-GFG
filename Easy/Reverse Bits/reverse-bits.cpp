//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        bitset<32> num(x);
        string s = num.to_string();
        reverse(s.begin(), s.end());
        
        long long ans = 0;
        for(int i = s.size()-1, j = 0; i >= 0; i--, j++)
            if(s[i] == '1') ans += pow(2,j);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends