//{ Driver Code Starts
// Driver function
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string reciprocalString(string S)
    {
        // Write Your code here
        int i = 0; 
        string str = "";
        while(i < S.length())
        {
            if(S[i] >= 'a' && S[i] <= 'z')
            {
                str+= 'z' - S[i] + 'a';
            }
            else if(S[i] >= 'A' && S[i] <= 'Z')
            {
                str+= 'Z' - S[i] + 'A';
            }
            else
            {
                str += S[i];
            }
            i++;
        }
        
        return str;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    string S;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        getline(cin,S);
        Solution ob;
        string reciprocal = ob.reciprocalString(S);
        cout<< reciprocal <<endl;

    }

	return 0;
}
// } Driver Code Ends