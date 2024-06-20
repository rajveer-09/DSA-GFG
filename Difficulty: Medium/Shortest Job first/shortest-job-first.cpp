//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// Back-end complete function Template for C++

class Solution {
  public:
    long long solve(vector<int>& bt) {
        // code here
        int n= bt.size();
        sort(bt.begin(), bt.end());
        long long wt=0;
        
        long long totalWaitingTime = 0;
        long long currentTime = 0;
        
        // Calculate waiting time for each process
        for (int i = 0; i < n; ++i) {
            totalWaitingTime += currentTime;
            currentTime += bt[i];
        }
        
        // Return the floor value of the average waiting time
        return totalWaitingTime / n;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> bt(n), p(n);
        for (int i = 0; i < n; i++) {
            cin >> bt[i];
        }
        Solution obj;
        long long ans = obj.solve(bt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends