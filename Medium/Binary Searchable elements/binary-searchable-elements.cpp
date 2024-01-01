//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int binarySearchable(int arr[], int n) {
        // code here
        vector<int> maxLeft(n,0),minRight(n,INT_MAX);
       int ans=0;
       
       int maxi=arr[0];
       for(int i=1;i<n;i++){
           maxLeft[i]=maxi;
           maxi=max(arr[i],maxi);
       }
       
       int mini=arr[n-1];
       for(int i=n-2;i>=0;i--){
           minRight[i]=mini;
           mini=min(arr[i],mini);
       }
       
       for(int i=0;i<n;i++){
           if(arr[i]<=minRight[i]&&arr[i]>=maxLeft[i])
               ans++;
       }

       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int Arr[n];
        for(int i=0;i<n;i++){
            cin >> Arr[i];
        }
        Solution obj;
        cout<<obj.binarySearchable(Arr,n)<<endl;
    }
    return 0;
}
// } Driver Code Ends