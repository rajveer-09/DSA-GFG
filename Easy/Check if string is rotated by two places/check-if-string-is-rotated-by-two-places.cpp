//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
         string s1=str1;
        string s2=str1;
        rotate(s1.begin(), s1.begin()+2, s1.end());
    //clock wise
    rotate(s2.begin(), s2.begin()+s2.size()-2, s2.end());
   if(s1==str2)
   return 1;
   else if(s2==str2)
   return 1;
   else
   return 0;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends