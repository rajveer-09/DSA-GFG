//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // Your code here
        int n = arr.size(), maxInd = 0, nextMaxInd = arr[0], res = 0;
        for ( int i = 0; i<n-1; i++ ){
            if ( maxInd == i ){
                maxInd = max(nextMaxInd, i+arr[i]);
                nextMaxInd = 0;
                res++;
            } else nextMaxInd = max(nextMaxInd, i+arr[i]);
        } return (maxInd >= n-1) ? res : -1;
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
        cout << obj.minJumps(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends