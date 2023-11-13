//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    // code here
	     vector<int> positive;
        vector<int> negative;
        for(int i = 0; i<n; i++){
            if(arr[i] < 0){
                negative.push_back(arr[i]);
            }else{
                positive.push_back(arr[i]);
            }
        }
        vector<int> ans;
        int positive_size = positive.size();
        int negative_size = negative.size();
        int m = min(positive_size, negative_size);
        for(int i = 0; i<m; i++){
            ans.push_back(positive[i]);
            ans.push_back(negative[i]);
        }
        for(int i = m; i<positive_size; i++){
            ans.push_back(positive[i]);
        }
        for(int i = m; i<negative_size; i++){
            ans.push_back(negative[i]);
        }
        for(int i = 0; i<ans.size(); i++){
            arr[i] = ans[i];
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends