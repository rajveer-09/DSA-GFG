//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int n)  
    {
        // code here
        long long xorr = 0;
        
        for(int i = 0; i < n; i++){
            xorr ^= arr[i];
        }
        
        long long pos = __builtin_ffs(xorr) - 1;
        
        long long ans1 = 0, ans2 = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] & (1<<pos)){
                ans1 ^= arr[i];
            }
            else ans2 ^= arr[i];
        }
        
        return {max(ans1,ans2), min(ans1, ans2)};
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends