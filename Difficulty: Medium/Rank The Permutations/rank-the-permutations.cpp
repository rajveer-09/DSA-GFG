//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int fact(int n){
        int ft = 1;
        if(n <=1) return ft;
        while(n){
            ft *= n;
            ft %= 1000003;
            n--;
        }
        return ft;
    }
    
    int rank(string S){
        // code here
        int ans = 1;
        int n = S.length();
        for(int i = 0; i< n -1; i++){
            int cnt = 0;
            for(int j = i+1 ; j < n; j++){
                if(S[j] < S[i]) cnt++;
                if(S[j]==S[i]) return 0;
            }
            ans += (cnt * fact(n-1-i))%1000003;
            ans %=1000003;
        }
        
        return ans;
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
        cout << ob.rank(S) << endl;
    }
    return 0;
}
// } Driver Code Ends