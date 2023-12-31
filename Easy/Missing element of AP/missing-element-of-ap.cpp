//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        // code here
        int cd=(arr[n-1]-arr[0])/n;
        //last one will not be missed as when last one would be missed nothing is missed before
        //similarly 1st one can also not be missed 
        for(int i=0;i<n-1;i++){
            
            if(arr[i+1]!=arr[i]+cd){
                return arr[i]+cd;
            }
            
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends