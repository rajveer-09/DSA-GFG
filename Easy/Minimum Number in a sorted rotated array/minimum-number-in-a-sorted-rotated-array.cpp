//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the minimum element in sorted and rotated array.
    int minNumber(int arr[], int low, int high)
    {
        // Your code here
        int ans = INT_MAX;

    while (low <= high) {
        int mid = (low + high) / 2;

        // Search space is already sorted; arr[low] will always be the minimum in that search space.
        if (arr[low] <= arr[high]) {
            ans = min(ans, arr[low]);
            break;
        }

        // If the left part is sorted.
        if (arr[low] <= arr[mid]) {
            // Keep the minimum.
            ans = min(ans, arr[low]);

            // Eliminate the left half.
            low = mid + 1;
        } else { // If the right part is sorted.
            // Keep the minimum.
            ans = min(ans, arr[mid]);

            // Eliminate the right half.
            high = mid - 1;
        }
    }

    return ans;
        
    }
};

//{ Driver Code Starts.


int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];	
		Solution obj;
		cout << obj.minNumber(a,0,n-1) << endl;
	}
	return 0;
}
// } Driver Code Ends