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
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends



string merge (string S1, string S2)
{
    // your code here
    
    string str = "";
    int m = S1.length();
    int n = S2.length();
    
    int i = 0, j = 0;
    
    while(i<m && j<n){
        str.push_back(S1[i]);
        str.push_back(S2[j]);
        i++;
        j++;
    }
    
    while(i<m){
        str.push_back(S1[i]);
        i++;
    }
    
    while(j<n){
        str.push_back(S2[j]);
        j++;
    }
    
    return str;
}