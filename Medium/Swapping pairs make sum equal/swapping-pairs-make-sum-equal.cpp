//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        unordered_map<int,int>mp;
        long long sum1=0,sum2=0;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            sum1+=a[i];
        }
        for(int i=0;i<m;i++){
            sum2+=b[i];
        }
        if((sum1+sum2)%2==1) return -1;
        sum1=(sum1+sum2)/2;
        for(int j=0;j<m;j++){
            long long req=sum1-sum2+b[j];
            if(mp.find(req)!=mp.end()) return 1;
            
        }
        return -1;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n];
        int b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        Solution ob;
        cout << ob.findSwapValues(a, n, b, m);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends