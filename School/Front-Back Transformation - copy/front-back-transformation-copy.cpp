//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string convert(string a);
int main()
{
    int t;
    cin>>t;
    while(t--)
        {
            string s;
            cin>>s;
            string ans=convert(s);
            cout<<ans<<endl;
            
        }
}

// } Driver Code Ends


string convert(string s)
{
    // code here.
    string str="";
     
    for(int i=0;i<s.length();i++)
    {
        if(islower(s[i]))
        {
            str+=('z'-s[i])+'a';
            
        }
        
        else if(isupper(s[i]))
        {
            str+=('Z'-s[i])+'A';
        }
    }
    
    return str;
}