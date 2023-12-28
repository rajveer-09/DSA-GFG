//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int maxlength(string s);
int main()
{
int t;
cin>>t;
while(t--)
{
string s;
cin>>s;
cout<<maxlength(s)<<endl;
}
return 0;
}

// } Driver Code Ends


int maxlength( string s)
{
// your code here
int temp=0;
    int ans=0;
    for(auto cc:s){
        if(cc=='1')
            temp++;
        ans=max(ans,temp);
        if(cc=='0')    
            temp=0;
        
    }
    return(ans);
}