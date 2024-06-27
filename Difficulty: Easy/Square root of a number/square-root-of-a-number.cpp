//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here 
        if(x==1) return 1;
        long long i=0, j=x-1;
        
        while(i<=j){
            long long m= i+(j-i)/2;
            
            if(m*m==x) return m;
            else if(m*m>x) j=m-1;
            else i=m+1;
        }
        
        return i-1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends