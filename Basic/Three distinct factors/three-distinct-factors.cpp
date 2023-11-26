//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int hasThreePrimeFac(long long n) {
        // code here
        if(n==1)
        return 0;
        
        int sqr=sqrt(n);
        
        if(sqr*sqr!=n)
        return 0;
        
        for(int i=2;i*i<=sqr;i++){
            
            if(sqr%i==0)
            return 0;
        }  
        return 1;
    
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        
        cin>>N;

        Solution ob;
        cout << ob.hasThreePrimeFac(N) << endl;
    }
    return 0;
}
// } Driver Code Ends