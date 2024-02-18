//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int arr[], int n)
    {
    	//code here.
    	int i,maxi,mini;
    	if(n%2==0){
    	    if(arr[0]>arr[1]){
    	        maxi=arr[0];
    	        mini=arr[1];
    	    }
    	    else{
    	        maxi=arr[1];
    	        mini=arr[0];
    	    }
    	    i=2;
    	}
    	else{
    	    maxi=arr[0];
    	    mini=arr[0];
    	    i=1;
    	}
    	
    	while(i<n-1){
    	    if(arr[i]>arr[i+1]){
    	        if(arr[i]>maxi) maxi=arr[i];
    	        if(arr[i+1]<mini) mini=arr[i+1];
    	    }
    	    else{
    	        if(arr[i+1]>maxi) maxi=arr[i+1];
    	        if(arr[i]<mini) mini=arr[i];
    	    }
    	    i+=2;
    	}
    	return mini+maxi;
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
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends