//{ Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


#include <vector>
using namespace std;

class Solution {
public:
    // Function to find the leaders in the array.
    vector<int> leaders(int n, int arr[]) {
        vector<int> result;
        int maxFromRight = arr[n-1];
        
        // The rightmost element is always a leader.
        result.push_back(maxFromRight);
        
        // Traverse the array from right to left
        for (int i = n - 2; i >= 0; --i) {
            if (arr[i] >= maxFromRight) {
                maxFromRight = arr[i];
                result.push_back(maxFromRight);
            }
        }
        
        // Reverse the result since we collected leaders from right to left
        reverse(result.begin(), result.end());
        
        return result;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t; // testcases
    while (t--) {
        long long n;
        cin >> n; // total size of array

        int arr[n];

        // inserting elements in the array
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        // calling leaders() function
        vector<int> v = obj.leaders(n, arr);

        // printing elements of the vector
        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }

        cout << endl;
    }
}

// } Driver Code Ends