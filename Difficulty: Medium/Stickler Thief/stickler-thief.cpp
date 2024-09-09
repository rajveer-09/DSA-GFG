//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int nums[], int n)
    {
        // Your code here
        int dp[2]{0};
        dp[0]=nums[0];
        dp[1]=max(nums[0], nums[1]);

        if(n==1) return dp[0];
        if(n==2) return dp[1];

        for(int i=2;i<n;i++){
            int inc = nums[i] + dp[0];
            int exc = dp[1];

            dp[0] = dp[1];
            dp[1] = max(inc, exc);
        }

        return dp[1];
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}

// } Driver Code Ends