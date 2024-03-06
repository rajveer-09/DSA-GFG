//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
vector <int> search(string pattern, string text)
        {
            //code here.
            vector<int> ans;
            int len1 = text.length(), len2 = pattern.length();
            
            for(int i=0; i<len1; i++){
                if(text[i] == pattern[0]){
                    string s1 = text.substr(i, len2);
                    
                    if(s1 == pattern)
                    ans.push_back(i+1);
                }
            }
            
            return ans;
        }
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal

// } Driver Code Ends