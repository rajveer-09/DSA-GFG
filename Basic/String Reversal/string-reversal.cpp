//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
     string result = "";
    int alphabets[52] {0};
    
    for(int i=s.length()-1; i>=0; i--) {
        if(isupper(s[i]) and alphabets[s[i]-65] == 0) {
            result += s[i];
            alphabets[s[i]-65]++;
        }
        else if(islower(s[i]) and alphabets[s[i]-71] == 0) {
            result += s[i];
            alphabets[s[i]-71]++;
        }
    }
    return result;
}