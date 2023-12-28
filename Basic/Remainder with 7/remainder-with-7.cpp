//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    /*You are required to complete this method */
    int remainderWith7(string n)
    {
        //Your code here
    int result = 0;
    for (int i = 0; i < n.size(); i++) {
        result = (result * 10 + (n[i] - '0')) % 7;
    }
    return result;
    }
};

//{ Driver Code Starts.
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
    string n;
    cin>>n;
    Solution ob;
    cout<<ob.remainderWith7(n)<<endl;
    
    }
	return 0;
}
// } Driver Code Ends