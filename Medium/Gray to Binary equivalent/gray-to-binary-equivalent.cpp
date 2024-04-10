//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n)
    {
        
        // Your code here
        int ans=0;
        int k=1;
        while(k<=n){
            k<<=1;
        }
        k>>=1;
        
        ans+=k;
        while(k>1){
            if(((ans&k)!=0)^((n&(k>>1))!=0))
            {
                ans+=k>>1;
            }
            k>>=1;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
    int t,n;
    cin>>t;//testcases
    while(t--)
    {
        cin>>n;//initializing n
        
        Solution ob;
        //calling function grayToBinary()
       cout<< ob.grayToBinary(n)<<endl;
    }
}

// } Driver Code Ends