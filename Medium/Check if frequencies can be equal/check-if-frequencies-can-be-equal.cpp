//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    // code here
	    unordered_map<char, int> mp;
	    for(auto ch: s)
	        mp[ch]++;
	        
	    int n = s.size(), sz = mp.size();
	    int avg = n / sz;
	    
	    if(n - (sz * avg) > 1)
	        return 0;
	        
	    for(auto i: mp)
	        if(i.second < avg)
	            return 0;
	            
	    return 1;
	}
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}



// } Driver Code Ends