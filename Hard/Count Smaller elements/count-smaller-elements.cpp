//{ Driver Code Starts
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> constructLowerArray(int *arr, int n) {
	    // code here
	      vector<int> ans,temp;
        for(int i=0;i<n;i++){
            temp.push_back(arr[i]);
        }
        sort(temp.begin(),temp.end());
        for(int i=0;i<n;i++){
            int index=lower_bound(temp.begin(),temp.end(),arr[i])-temp.begin();
//in temp,array is sorted, we iterate in arr & look how many elements are smaller than arr[i]
            ans.push_back(index);
            temp.erase(temp.begin()+index);
/*remove arr[i] from temp, as index is number of elements smaller than arr[i], so arr[i] is
at index th position(0 base indexing) */
        }
        return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.constructLowerArray(arr, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends