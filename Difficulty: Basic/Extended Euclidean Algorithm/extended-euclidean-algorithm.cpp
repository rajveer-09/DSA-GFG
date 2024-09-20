//{ Driver Code Starts



#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends


class Solution{
public:
    int extendedGcd(int a, int b, int &x, int &y) {
        if(a == 0) {
            x = 0;
            y = 1;
            return b;
        }
        
        int x1, y1;
        int gcd = extendedGcd(b%a, a, x1, y1);
        
        x = y1 - (b/a) * x1;
        y = x1;
        
        return gcd;
    }
    
    vector<int> gcd(int a, int b){
        // code here
        int d, x, y;
    
        d = extendedGcd(a, b, x, y);
        
        return {d, x, y};
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        Solution ob;
        vector<int> v = ob.gcd(a,b);
        if(v.size()!=3)
            return 0;
        cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<"\n";
    }
    return 0; 
}
// } Driver Code Ends