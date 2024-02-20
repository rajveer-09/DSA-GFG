//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

#define mod 1003
class Solution{
public:
    int dp[201][201][2];
    int func(int i, int j, int val, string& s){
        if(i > j) return 0;
        if (i == j) {
            if (val == 1) return s[i] == 'T' ? 1 : 0;
            else return s[i] == 'F' ? 1 : 0;
        }
        if(dp[i][j][val] != -1) return dp[i][j][val];
        int ways = 0;
        for(int k = i+1; k < j; k += 2){
            int lt = func(i, k-1, 1, s);
            int lf = func(i, k-1, 0, s);
            int rt = func(k+1, j, 1, s);
            int rf = func(k+1, j, 0, s);
            if(s[k] == '&'){
                if(val) ways = (ways % mod + (lt * rt) % mod) % mod;
                else ways = (ways % mod + (lt * rf) % mod + (lf * rt) % mod + (lf * rf) % mod) % mod;
            }
            else if(s[k] == '|'){
                if(val) ways = (ways % mod + (lt * rt) % mod + (lt * rf) % mod + (lf * rt) % mod) % mod;
                else ways = (ways % mod + (lf * rf) % mod) % mod;
            }
            else{
                if(val) ways = (ways % mod + (lt * rf) % mod + (lf * rt) % mod) % mod;
                else ways = (ways % mod + (lt * rt) % mod + (lf * rf) % mod) % mod;
            }
        }
        return dp[i][j][val] = ways;
    }
    int countWays(int N, string S){
        memset(dp, -1, sizeof(dp));
        return func(0, N-1, 1, S);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.countWays(n, s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends