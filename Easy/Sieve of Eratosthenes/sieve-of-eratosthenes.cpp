//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        vector<int>primes;
        vector<int>prime(n+1,true);
        
        for(int i=2;i*i<=n;i++){
            
            
            if(prime[i]==true){
                
                
                for(int p=i*i;p<=n;p+=i){
                    prime[p]=false;
                }
            }
            
        }
        for (int p = 2; p <= n; p++){
        if (prime[p])
            primes.push_back(p);
        }
        return primes;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends