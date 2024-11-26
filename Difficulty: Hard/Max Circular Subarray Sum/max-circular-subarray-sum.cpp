//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends

class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {
        int n = arr.size();
        int max_sum = INT_MIN, min_sum = INT_MAX;
        int total = 0, curr_max = 0, curr_min = 0;
        
        for (int i = 0; i < n; i++) {
            total += arr[i];
            curr_max += arr[i];
            max_sum = max(max_sum, curr_max);
            curr_max = max(curr_max, 0);

            curr_min += arr[i];
            min_sum = min(min_sum, curr_min);
            curr_min = min(curr_min, 0);
        }

        if (total == min_sum) 
            return max_sum;
        
        return max(max_sum, total - min_sum);
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends