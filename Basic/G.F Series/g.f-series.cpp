//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    void gfSeries(int N)
    {
        solve(N);
        cout<<endl;
    }
    void solve(int N,long int n1 = 0,long int n2 = 1){
        if(n1 == 0) cout<<n1<<" "<<n2<<" ";
        
        if(N >= 3){
            long int n3 = n1*n1-n2;
            cout<<n3<<" ";
            solve(N-1,n2,n3);
        }
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
        ob.gfSeries(N);
    }
    return 0;
}
// } Driver Code Ends