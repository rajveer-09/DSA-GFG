//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        // code here
        long long ans = 0;
        int m = 1000000007;
        int k = 1;

        for(int i = 1;i<=n;i++){
            long long f = 1;
            for(int l = 0; l < i ;l++){
                f*=k;
                f%=m;
                k++;
            }
            ans+=f;
            ans%=m;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends