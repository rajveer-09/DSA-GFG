//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isPrime(int N){
        // code here
        if (N <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    if (N == 2 || N == 3) {
        return true; // 2 and 3 are prime numbers
    }
    if (N % 2 == 0 || N % 3 == 0) {
        return false; // multiples of 2 and 3 are not prime
    }

    // Check for factors starting from 5 up to the square root of n
    for (int i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) {
            return false; // n is divisible by i or i+2, so it's not a prime number
        }
    }

    return true; 
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
        cout << ob.isPrime(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends