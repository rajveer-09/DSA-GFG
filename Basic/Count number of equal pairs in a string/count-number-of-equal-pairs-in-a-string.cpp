//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
  public:
    long long int equalPairs (string s)
    {
    	//code here.
    vector< int > h( 26 + 'a' );
    for ( const char c : s ) ++h[ c ];
    long long r{};
    for ( const int i : h ) r += i * i;
    return r;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout <<ob.equalPairs (s) << endl;
	}
}
// } Driver Code Ends