//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n=s.length();
        
        int i=0, j=0;
        unordered_map<char, int>mpp;
        int maxi=0;
        
        for(; j<n; j++){
            mpp[s[j]]++;
            for(; i<n && mpp[s[j]]>=2; i++){
                mpp[s[i]]--;
                if(mpp[s[i]]==0){
                    mpp.erase(s[i]);
                }
            }
            maxi=max(maxi, j-i+1);
        }
        
        return maxi;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends