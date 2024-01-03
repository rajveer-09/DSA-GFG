//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
         vector<string> v;
    int s = 0;

    for (int i = 0; i <= S.size(); i++) {
        if (i == S.size() || S[i] == '.') {
            string ss;
            for (int j = s; j < i; j++) {
                ss += S[j];
            }
            v.push_back(ss);
            s = i + 1; // Move s to the next character after the period
        }
    }

    reverse(v.begin(), v.end());

    string ans;
    for (auto it : v) {
        ans += it + '.';
    }

    ans.pop_back();

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
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends