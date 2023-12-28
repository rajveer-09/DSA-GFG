//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
         string ans="";
        for(int i=0;i<s1.length();i++){
            bool isCommon = false;
            for(int j=0;j<s2.length();j++){
                if (s1[i] == s2[j]) {
                isCommon = true;
                break;
                }
            }
        if (!isCommon) {
            ans += s1[i];
        }
    }
     for (int i = 0; i < s2.length(); i++) {
        if (s1.find(s2[i]) == string::npos) {
            ans += s2[i];
        }
    }
     if (ans.empty()) {
        return "-1";
  }
    return ans;
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends