//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    void prev(long long arr[],int n,vector<long long>&pre)
 {
     stack<long long int>s;
     for(int i=0;i<n;i++)
     {
         while(!s.empty()&&arr[i]<=arr[s.top()])
         s.pop();
         if(s.empty())
         pre.push_back(-1);
         else
         pre.push_back(s.top());
         s.push(i);
     }
 }
 void next(long long arr[],int n,vector<long long>&nex)
 {
      stack<long long int>s;
     for(int i=n-1;i>=0;i--)
     {
         while(!s.empty()&&arr[i]<=arr[s.top()])
         s.pop();
         if(s.empty())
         nex[i]=n;
         else
         nex[i]=(s.top());
         s.push(i);
     }
    // reverse(nex.begin(),nex.end());
 }
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long int>pre,nex(n,0);
      
            prev(arr,n,pre);
            next(arr,n,nex);
            long long m=1;
  
   for(int i=0;i<n;i++)
   {
        int india=nex[i]-pre[i]-1;
       if(m<arr[i]*india)
       m=arr[i]*india;
   }
        return m;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends