//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
         int diff=3,diff_c=0;
        vector<int>count(256,0);
        int first=0,second=0;
        int len=s.size();
        //checking for different character in string
        for(int i=0;i<s.size();i++){
            if(count[s[i]]==0)
            diff_c++;
            count[s[i]]++;
        }
        for(int i=0;i<256;i++)
        count[i]=0;
        
        //check if diff_c==3 or not
        if(diff!=diff_c)
        return -1;
        while(second<s.size()){
            while(diff && second<s.size()){
                if(count[s[second]]==0)
                diff--;
                count[s[second]]++;
                second++;
            }
            len=min(len,second-first);
            while(diff!=1){
                len=min(len,second-first);
                count[s[first]]--;
                if(count[s[first]]==0)
                diff++;
                first++;
            }
        }
        return len;   
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    }
}
// } Driver Code Ends