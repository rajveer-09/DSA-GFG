//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        set<int> st;  // Declare a set to store unique elements in sorted order
        
        // Insert all elements into the set
        for(int i = 0; i < arr.size(); i++) {
            st.insert(arr[i]);
        }
        
        // If the size of the set is less than k, k-th smallest element doesn't exist
        if(st.size() < k) return -1;
        
        // Create an iterator to the beginning of the set
        auto it = st.begin();
        
        // Advance the iterator to the (k-1)th position
        advance(it, k-1);
        
        // Return the value at the k-th position
        return *it;
    }
};



//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        k = crr[0];
        int n = arr.size();
        Solution ob;
        cout << ob.kthSmallest(arr, k) << endl;
    }
    return 0;
}

// } Driver Code Ends