//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool solve(string &s, int i, int j, vector<vector<int>>& dp){
        if(i >= j) return true;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s[i] == s[j]){
            return dp[i][j] = solve(s, i + 1, j - 1, dp);
        }
        
        return dp[i][j] = 0;
    }
    string longestPalindrome(string s){
        // code here 
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n, -1));
        
        int mxlen = -1;
        int st = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(solve(s, i, j, dp) && j - i + 1 > mxlen){
                    mxlen = j - i + 1;
                    st = i;
                }
            }
        }
        
        return s.substr(st, mxlen);
    }
};

//{ Driver Code Starts.



int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.longestPalindrome(S)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends