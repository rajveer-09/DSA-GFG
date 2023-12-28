//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int isPossible (string s);

int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		if (isPossible (s))
			cout << "Yes\n";
		else
			cout << "No\n";
	}
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int isPossible (string S)
{
    // your code here
    
    int count = 0;
    unordered_map<char, int> ump;
    for(auto i: S) ump[i]++;
    for(auto i: ump)
        if(i.second % 2 == 1) count++;
    return (count>1?0:1);
}