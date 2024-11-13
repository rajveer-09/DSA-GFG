//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int cnt = 0;
        
        while(n){
           if(n % 2 == 0){
               n /= 2;
               cnt++;
           }
           else{
               n -= 1;
               cnt++;
           }
        }
        
        return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    
cout << "~" << "\n";
}
}
// } Driver Code Ends