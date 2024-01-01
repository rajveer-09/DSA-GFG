//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long long primeProduct(long long m, long long n){
        // code here
    const long long MOD = 1000000007;

    // Ensure m is at least 2
    m = max(m, 2LL);

    vector<bool> prime(n + 1, true);

    for (long long i = 2; i * i <= n; i++) {
        if (prime[i]) {
            for (long long p = max(i * i, (m + i - 1) / i * i); p <= n; p += i) {
                prime[p] = false;
            }
        }
    }

    long long ans = 1;
    for (long long p = m; p <= n; p++) {
        if (prime[p]) {
            ans = (ans * p) % MOD;
        }
    }

    return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends