//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
          int l = x.length();
        stack<char>s;
        for(int i=0;i<l;i++)
        {
            if((x[i] == '{') || (x[i] =='(') || (x[i] =='['))
            {
             s.push(x[i]);
            }
            else
            {
                if( (s.empty() == true) || (cheak(s.top(),x[i]) != true) ) return false;
                s.pop();
            }
        }
        
        return s.empty()? true: false;
    }
    bool cheak(char i, char j)
    {
     if(i == '{' && j == '}') return true;
     if(i == '(' && j == ')') return true;
     if(i == '[' && j == ']') return true;
     return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends