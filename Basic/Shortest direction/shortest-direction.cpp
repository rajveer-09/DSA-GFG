//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    string shortestPath (string S)
    {
        // your code here
        int x=0,y=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='S'){
                x--;
            }else if(S[i]=='N'){
                x++;
            }else if(S[i]=='E'){
                y++;
            }else{
                y--;
            }
        }
        string ans="";
        while(x|| y){
            if(y>0){
                ans+='E';
                y--;
            }else if(x>0){
                ans+='N';
                x--;
            }else if(x<0){
                ans+='S';
                x++;
            }else if(y<0){
                ans+='W';
                y++;
            }
        }
        return ans;
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
        cout << ob.shortestPath (s) << endl;
    }
}

// } Driver Code Ends