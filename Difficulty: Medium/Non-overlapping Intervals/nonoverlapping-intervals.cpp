//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    int minRemoval(vector<vector<int>>& intervals) {
        if (intervals.empty()) return 0;

        
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        int nonOverlapCount = 0;
        int lastEnd = INT_MIN;

        for (const auto& interval : intervals) {
            if (interval[0] >= lastEnd) {
                lastEnd = interval[1];
                nonOverlapCount++;
            }
        }

        return intervals.size() - nonOverlapCount;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<vector<int>> intervals(N, vector<int>(2));
        for (int i = 0; i < N; i++) {
            cin >> intervals[i][0] >> intervals[i][1];
        }
        Solution obj;
        cout << obj.minRemoval(intervals) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends