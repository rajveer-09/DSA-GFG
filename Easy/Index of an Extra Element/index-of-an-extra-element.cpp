//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findExtra(int n, int arr1[], int arr2[]) {
        // add code here.
        int low = 0;
        int high = n - 2;  // arr2 length is n-1, so we search in range 0 to n-2

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr1[mid] == arr2[mid]) {
            // Extra element is in the right half
                low = mid + 1;
            } 
            else {
            // Extra element is in the left half or at mid
                high = mid - 1;
            }
        }

        // When the loop ends, low is the index of the extra element
        return low;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr1[n], arr2[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> arr2[i];
        }
        Solution obj;
        cout << obj.findExtra(n, arr1, arr2) << endl;
    }
}
// } Driver Code Ends