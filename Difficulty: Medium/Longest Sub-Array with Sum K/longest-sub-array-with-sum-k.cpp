//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int nums[],  int N, int k) 
    { 
        // Complete the function
        int maxLength = 0;
        int currentSum = 0;
        unordered_map<int, int> prefixSumIndex;

        // Initialize with the base case
        prefixSumIndex[0] = -1;

        for (int i = 0; i < N; i++) {
            currentSum += nums[i];
            
            // Check if the currentSum - k has been seen before
            if (prefixSumIndex.find(currentSum - k) != prefixSumIndex.end()) {
                maxLength = max(maxLength, i - prefixSumIndex[currentSum - k]);
            }

            // Store the first occurrence of the currentSum
            if (prefixSumIndex.find(currentSum) == prefixSumIndex.end()) {
                prefixSumIndex[currentSum] = i;
            }
        }

        return maxLength;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends