//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    long solve(int a[],int n,int k){
        int maxi = INT_MIN,start=0;
        long ans=0;
        for(int i=0;i<n;i++){
            maxi = max(a[i],maxi);
            if(maxi>k){
                start = i+1;
                maxi = INT_MIN;
            }
            ans += i-start+1;
        }
        return ans;
    }
    long countSubarrays(int a[], int n, int L, int R)
    {   
        return solve(a,n,R)-solve(a,n,L-1);
    }
};

//{ Driver Code Starts.
// driver program
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        
        int n ,l,r;
        cin >> n>>l>>r;
        int a[n];
        for(int i=0;i<n;i++)
        cin >> a[i];
        Solution ob;
    	cout << ob.countSubarrays(a, n, l, r)<<endl;
    }
	return 0;
}

// } Driver Code Ends