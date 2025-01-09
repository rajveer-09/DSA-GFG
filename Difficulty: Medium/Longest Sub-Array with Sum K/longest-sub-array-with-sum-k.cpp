//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& nums, int k) {
        // code here
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = -1;

        int sum = 0;
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            sum += nums[i];

            if (mp.count(sum - k)) {
                maxLen = max(maxLen, i - mp[sum - k]);
            }

            if (!mp.count(sum)) {
                mp[sum] = i;
            }
        }

        return maxLen;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends