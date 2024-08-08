//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int kthPrime(int n, int k) {

        int N = 10000;
        bool sieve[10001];
        
        for(int i=0;i<=N;++i){
            if(i==0 || i==1) sieve[i] = false;
            else sieve[i] = true;
        }
        
        for(int i=2;i*i<=N;++i){
            if(sieve[i]){
                for(int j=i*i;j<=N;j+=i){
                    sieve[j] = false;
                }
            }
        }
        
        vector<int> prime_factor;
        for(int i=2;i<=n;++i){
            while(!(n%i)){
                prime_factor.push_back(i);
                n /= i;
            }
        }
        
        if(k > prime_factor.size()) return -1;
        
        return prime_factor[k-1];
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        
        Solution ob;
        cout<<ob.kthPrime(n, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends