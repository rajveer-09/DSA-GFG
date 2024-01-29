//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> ans;
    int maxi = INT_MIN;

    // Calculate maximum of the first window
    for (int i = 0; i < k; i++) {
        maxi = max(maxi, arr[i]);
    }
    ans.push_back(maxi);

    // Process remaining windows
    for (int i = k; i < n; i++) {
        if (arr[i - k] == maxi) {
            // If the element going out of the window is the maximum, recompute the maximum for the new window
            maxi = INT_MIN;
            for (int j = i - k + 1; j <= i; j++) {
                maxi = max(maxi, arr[j]);
            }
        } else {
            // If the element going out of the window is not the maximum, check if the current element is the new maximum
            maxi = max(maxi, arr[i]);
        }
        ans.push_back(maxi);
    }

    return ans;
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends