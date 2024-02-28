//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	long long sumBitDifferences(int arr[], int n) {
	    // code here
	    vector<int>v(33,0);
        for(int i=0;i<n;i++){
            int p=arr[i];
            int j=1;
            int k=0;
            while(j<=arr[i]){
                if(arr[i]&j)v[k]++;
                j=j<<1;
                k++;
                
            }
        }
       long long  sum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<32;j++){
                int p=1<<j;
                if((p&arr[i])==0) sum+=1ll*v[j];
            }
        }
        return 2*sum;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.sumBitDifferences(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends