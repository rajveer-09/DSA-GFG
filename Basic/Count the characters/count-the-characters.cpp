//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
        int getCount (string S, int N)
        {
            //code here.
    int h[26] {0}, count = 0;
    h[S[0]-'a']++;
    for(int i=1; i<S.length(); i++)
        if(S[i-1] != S[i])
            h[S[i]-97]++;
    for(int i=0; i<26; i++)
        if(h[i] == N)
            count++;
    return count;
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        int n; cin >> n;
        
        Solution ob;
        cout <<ob.getCount (s, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends