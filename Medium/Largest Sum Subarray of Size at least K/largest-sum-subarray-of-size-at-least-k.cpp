//{ Driver Code Starts
// C++ program to find largest subarray sum with
// at-least k elements in it.
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:    
    long long int maxSumWithK(long long int a[], long long int n, long long int k) 
    {
        long long int dp[n];
    dp[0]=a[0];
    long long int ans=0,sum=0,maxi=0;
    long long int max_sum=a[0];
    for(int i=1;i<n;i++){
        max_sum=max(max_sum+a[i],a[i]);
        dp[i]=max_sum;
}
  
  for(int i=0;i<k;i++){
      sum+=a[i];
  }
  ans=sum;
   maxi=sum;
  for(int i=0;i<n-k;i++){
      sum+=a[i+k]-a[i];
      maxi=max(sum,sum+dp[i]);
      ans=max(ans,maxi);
  }
  
  return ans;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main() {
    long long int t;
    cin >> t;
    while (t--) {
        long long int n, k, i;
        cin >> n;
        long long int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.maxSumWithK(a, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends