//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    bool checkBinary (string s)
    {
        // Your Code Here 
         int p=0;
        for(int i=0;i<s.length();i++)
        {
          if(s[i]=='1')
          {
          p=i;
          break;
          }
        }
        
        
        for(int i=p+1;i<s.length()-1;i++)
        {
          if(s[i]=='0' && s[i+1]=='1')
          return false;
        }
        return true;
    }
};

//{ Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		Solution ob;
		if (ob.checkBinary (s))
			cout << "VALID\n";
		else
			cout << "INVALID\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends