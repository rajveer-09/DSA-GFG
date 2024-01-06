//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
          int trace = 0, idx = -1, cur = 1, ans = 1;
        
        for (int i = 1; i < N; ++i) {
            if (abs(arr[i] - arr[i - 1]) > 1)
                cur = 1, idx = i, trace = 0;
            else if (trace == 0) {
                trace = arr[i] - arr[i - 1];
                cur++, ans = max(ans, cur);
                if (trace)
                    idx = i;
            }
            else if (arr[i] - arr[i - 1] == 0) 
                ans = max(ans, ++cur);
            else if (arr[i] - arr[i - 1] == trace)
                cur = i - idx + 1, idx = i;
            else
                ans = max(ans, ++cur), idx = i, trace = arr[i] - arr[i - 1];
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends