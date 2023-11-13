//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int n){
        
        // your code here
        int min_sum = arr[0];
    int total_sum = arr[0];
    int min_end = arr[0];
    
    int max_end =  arr[0];
    int max_sum = arr[0];
    
    for(int i =1;i<n;i++){
        
        total_sum += arr[i];
        
        min_end = min(arr[i],min_end+arr[i]);
        min_sum = min(min_sum , min_end);
        
        max_end = max(arr[i],max_end+arr[i]);
        max_sum = max(max_sum , max_end);
        
    }
    
    // if(total_sum == min_sum) return max_sum;
    
    // or
    
    if(max_sum<0) return max_sum;
    
    return max(max_sum,(total_sum - min_sum));
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends