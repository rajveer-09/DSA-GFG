//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        // code here
       long long l = 0;
       long long r = max(M,L)+1;
       long long ans = 0;
       while(l<=r){
           long long ts = 0;
           long long mid = l + (r-l)/2;
           for(int i=0; i<N; i++){
               if(H[i] + A[i]*mid >= L){
                   ts += H[i]+A[i]*mid;
                   if(ts >=M){
                       break;
                   }
               }
           }
           if(ts>=M){
               ans = mid;
               r = mid-1;
           }
           else{
               l = mid+1;
           }
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}
// } Driver Code Ends