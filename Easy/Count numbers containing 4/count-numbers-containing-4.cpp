//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
        int cnt = 0;
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);  // Convert the integer to string
        if (str.find('4') != string::npos) {  // Check if '4' is in the string
            cnt++;
        }
    }
    return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends