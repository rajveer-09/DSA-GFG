//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int count_tabs(string a[], int n)
    {
        // Complete the function
        unordered_set< string > s;
    for ( int i{}; i < n; ++i )
        if ( a[ i ] == "END" ) s.clear();
        else if ( s.find( a[ i ] ) != s.end() )
            s.erase( a[ i ] );
        else s.insert( a[ i ] );
    return s.size();
    }
};


//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n;cin>> n;
	    string arr[n+1];
	    
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	   Solution ob;
	   cout << ob.count_tabs(arr, n) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends