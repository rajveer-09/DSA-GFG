//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

string merge (string s1, string s2);

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s1; cin >> s1;
        string s2; cin >> s2;

        cout << merge (s1, s2) << endl;
    
cout << "~" << "\n";
}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string s1, string s2){
    // your code here
    string ans = "";
    
    int i = 0; // traverse s1
    int j = 0; // tarverse s2;
    
    while(i < s1.size() && j < s2.size()){
        ans += s1[i++];
        ans += s2[j++];
    }
    
    while(i < s1.size()) ans += s1[i++];
    while(j < s2.size()) ans += s2[j++];
    
    return ans;
}