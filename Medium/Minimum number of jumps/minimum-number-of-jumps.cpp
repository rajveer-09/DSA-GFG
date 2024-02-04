//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
         int jumps =0;
        int currmax =0;
        int maxpos =0;
        for(int i=0;i<n;i++){
            if(i > maxpos){
                return -1;
                
            }
            if(maxpos >= n-1){
                return jumps;
            }
            if(currmax < i+arr[i]){
                currmax  = i+arr[i];
            }
            if(i == maxpos){
                maxpos = currmax;
                jumps++;
            }
        }
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends