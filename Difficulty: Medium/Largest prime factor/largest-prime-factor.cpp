//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime numbers
    if (n <= 3) return true;  // 2 and 3 are prime numbers

    if (n % 2 == 0 || n % 3 == 0) return false; // Exclude multiples of 2 and 3

    for (int i = 5; i * i <= n; i += 6) { // Check for factors up to sqrt(n)
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}
    long long int largestPrimeFactor(int N){
        // code here
        if(isPrime(N)) return N;
        
        for(int i= sqrt(N);i>=2;i--){
            if(N%i==0){
                if(isPrime(i) || isPrime(N/i)){
                    if(isPrime(max(i,N/i))) return max(i,N/i);
                    else if(isPrime(min(i,N/i))) return min(i,N/i);
                }
            }
            
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends