//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            vector<int> ans;
            int count_lc=0;
            int count_uc=0;
            int count_nc=0;
            int count_sc=0;
            for(int i=0;i<s.size();i++)
            {
                if((s[i]>='a')&&(s[i]<='z'))
                {
                    count_lc++;
                }
                else if((s[i]>='A')&&(s[i]<='Z'))
                {
                    count_uc++;
                }
                else if((s[i]>='0')&&(s[i]<='9'))
                {
                    count_nc++;
                }
                else
                {
                    count_sc++;
                }
            }
            ans.push_back(count_uc);
            ans.push_back(count_lc);
            ans.push_back(count_nc);
            ans.push_back(count_sc);
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
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends