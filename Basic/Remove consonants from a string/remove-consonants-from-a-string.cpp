//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    bool isvowel(char c)
    {
        if(c=='a' || c=='e' ||c=='i' || c=='o' || c=='u' || c=='A' ||c=='E' || c=='I' || c=='O'||c=='U')
        return true;
        else
        return false;
    }
    string removeConsonants(string s)
    {
    //complete the function heredef removeConsonants(s):
    string ans="";
    for(int i=0;i<s.size();i++)
    {
        if(isvowel(s[i]))
        {
         ans+=s[i];   
        }
       
    }
    if(ans.size()==0)
      {
        return "No Vowel";
      }
       return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsonants(s) << "\n";
    }
return 0;
}
// } Driver Code Ends