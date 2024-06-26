//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
 
class Solution
{
    public:
    // Function for finding maximum AND value.
    int maxAND (int arr[], int N)
    {
        // Your code here
         int ans = 0;
        vector<int> v;
        for(int i=0;i<N;i++)
        {
            v.push_back(arr[i]);
        }
        int cnt = 0;
        for(int i=31;i>=0;i--)
        {
            vector<int> set_bit;
            for(auto &j:v)
            {
                if(j&(1<<i))
                {
                    set_bit.push_back(j);
                }
            }
            if(set_bit.size()>=2)
            {
                ans+=(1<<i);
                v = set_bit;
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
 
// Driver function
int main()
{
    int t;
    cin>>t;//testcases
    while(t--)
    {
        int n;
        cin>>n;//input n
        int arr[n+5],i;
        
        //inserting elements
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        //calling maxAND() function
        cout <<  obj.maxAND(arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends