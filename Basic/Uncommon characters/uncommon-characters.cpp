//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string s1, string s2)
        {
            // code here
  string ans="";
  int n=s1.size(),m=s2.size();
  for(int i=0;i<n;i++)
  {
  if(s2.find(s1[i])==-1) 
  ans+=s1[i];
      
  }
  for(int i=0;i<m;i++){
  if(s1.find(s2[i])==-1)
  ans+=s2[i];
  }
 sort(ans.begin(),ans.end());
 set<char>ans2;
 for(int i=0;i<ans.size();i++)
 {
     ans2.insert(ans[i]);
 }
 string a="";
 for(auto it:ans2)
 {
     a+=it;
 }
 if(ans.size()==0)
 return "-1";
 else
 return a;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends