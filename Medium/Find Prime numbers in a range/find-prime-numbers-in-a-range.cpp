//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int m, int n) {
        // code here
        vector<int>primes;
        vector<int>prime(n+1,true);
        
        for(int i=2;i*i<=n;i++){
            
            
            if(prime[i]==true){
                
                
                for(int p=i*i;p<=n;p+=i){
                    prime[p]=false;
                }
            }
            
        }
        if(m<=1)
        m=2;
        for (int p = m; p <= n; p++){
        if (prime[p])
            primes.push_back(p);
        }
        return primes;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends