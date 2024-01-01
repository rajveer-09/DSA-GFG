//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long int power(int a, long long int b) { 
        //complete the function here
        int mod=1e9+7;
        long long int res=1;
        long long int c=a;
        while(b>0){
          if(b&1)
            res=(res*c)%mod;
            c= (c*c)%mod;
            b=b>>1;
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 



// } Driver Code Ends