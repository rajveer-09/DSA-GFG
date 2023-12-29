//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
    public:
    
    string modify (string s)
    {
        // your code here
         for(int i=1;i<s.length();i++){
            if(s[0]>=97 && s[i]<=122){
                if(s[i]>=97 && s[i]<=122){
                    s[i]=s[i];
                }
                else{
                    s[i]=s[i]+32;
                }
            }
            else{
                if(s[i]>=65 && s[i]<=90){
                    s[i]=s[i];
                }
                else{
                s[i]-=32;
                }
            }
        }
        return s;
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
		cout << ob.modify (s) << endl;
	}
}
// } Driver Code Ends