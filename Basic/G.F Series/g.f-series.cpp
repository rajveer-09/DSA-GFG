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
        long long gf[N];
        gf[0]=0;
        gf[1]=1;
        for(int i=2;i<N;i++){
            gf[i]=gf[i-2]*gf[i-2]-gf[i-1];
        }
        for(int i=0;i<N;i++){
            cout<<gf[i]<<" ";
        }
        cout<<endl;
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