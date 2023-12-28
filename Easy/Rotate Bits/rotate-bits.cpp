//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            d = d%16;
        
        int ln=0,rn=0;
        for(int i=0;i<16;i++){
            int pos=(16-d+i)%16;
            if(n&1<<pos) ln+=pow(2,i);
            
        }
        //right shift
        int rs=16-d;
        for(int i=0;i<16;i++){
            int pos=(16-rs+i)%16;
            if(n&1<<pos) rn+=pow(2,i);
            
        }
        return {ln,rn};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        
        int n, d; cin >> n >> d;
        Solution ob;
        vector <int> res = ob.rotate (n, d);
        cout << res[0] << endl << res[1] << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends