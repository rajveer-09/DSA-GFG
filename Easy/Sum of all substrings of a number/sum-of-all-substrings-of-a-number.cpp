//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        
        // your code here
        long long prev = s[0]-'0',mod = 1e9+7,res = prev;
        
        for(int i=1;i<s.size();i++)
        {
            prev = ((prev*10) + ((s[i]-'0')*(i+1)))%mod;
            res = (res+prev)%mod;
        }
        
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking string
        string s;
        cin>>s;
        Solution ob;
        //calling sumSubstrings() function
        cout << ob.sumSubstrings(s) << endl;
        
    }
    return 0;
}

// } Driver Code Ends