//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
            //code here.
            vector <char> vowels;
            string ans = "";
            
            for(int i = 0; i < s.size(); i++){
                if(s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||s[i] == 'u') vowels.push_back(s[i]);
            }
            
            int j = vowels.size()-1;
            
            for(int i = 0; i < s.size(); i++){
                if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                    ans += vowels[j];
                    j--;
                }
                else{
                    ans += s[i];
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
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends