//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    string makeEven(string s)
    {
        //code here.
         int last = -1;
        for(int i=0; i<s.length()-1; i++) {
            if(s[i]%2 == 0) {
                last = i;
                if(s[i] < s[s.length()-1]) {
                    swap(s[i], s[s.length()-1]);
                    return s;
                }
            }
        }
        if(last != -1) swap(s[last], s[s.length()-1]);
        return s;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    string str;
	    cin>>str;
	    Solution ob;
	    cout<<ob.makeEven(str)<<endl;
	}
	return 0;
}

// } Driver Code Ends