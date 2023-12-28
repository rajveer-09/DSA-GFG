//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{
    
    bool isvowel(char n)
    {
        if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u')
            return true;
        return false;
    }
    public:

    string Sandwiched_Vowel(string s)
    {
        string ans;
        for(int i = 0; i < s.length(); i++)
        {
            if(isvowel(s[i]) && !isvowel(s[i-1]) && !isvowel(s[i+1]) && i != 0 && i != s.length()-1)
               continue;
            ans.push_back(s[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution obj;
        string ans = obj.Sandwiched_Vowel(s);
        cout<<ans<< endl;
    }

	return 0;
}
// } Driver Code Ends