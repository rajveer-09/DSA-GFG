//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
public:
    int minJumps(vector<int>& arr) {
        
        int n = arr.size(), maxInd = 0, nextMaxInd = arr[0], res = 0;

        for (int i = 0; i < n - 1; i++) {
            // If we have reached the max index we can currently jump to
            if (maxInd == i) {
                // Update maxInd to the farthest we can jump from this point
                maxInd = max(nextMaxInd, i + arr[i]);
                // Reset nextMaxInd for the next iteration
                nextMaxInd = 0;
                // Increment the result count (number of jumps)
                res++;
            } else {
                // Update nextMaxInd to the farthest we can jump from this point
                nextMaxInd = max(nextMaxInd, i + arr[i]);
            }
        }
        // Return the result if we can reach the end, otherwise return -1
        return (maxInd >= n - 1) ? res : -1;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, i, j;
        vector<int> arr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        cout << obj.minJumps(arr) << endl << "~\n";
    }
    return 0;
}

// } Driver Code Ends