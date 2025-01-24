//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        // return vector with correct order of elements
        int n = a.size(), m = b.size();
        int i = 0, j = 0;
        
        vector<int> ans;
        
        while (i < n && j < m) {
            if (i > 0 && a[i] == a[i - 1]){
                i++;
                continue;
            }
            
            if (j > 0 && b[j] == b[j - 1]){
                j++;
                continue;
            }
            
            if (a[i] < b[j]){
                ans.push_back(a[i]);
                i++;
            } else if (a[i] > b[j]) {
                ans.push_back(b[j]);
                j++;
            } else {
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        
        while (i < n) {
            if (i == 0 || a[i] != a[i - 1]) {
                ans.push_back(a[i]);
            }
            i++;
        }
        
        while (j < m) {
            if (j == 0 || b[j] != b[j - 1]) {
                ans.push_back(b[j]);
            }
            j++;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> a, b;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            a.push_back(number);
        }

        // Read second array
        getline(cin, input);
        stringstream ss2(input);
        while (ss2 >> number) {
            b.push_back(number);
        }

        Solution ob;
        vector<int> ans = ob.findUnion(a, b);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends