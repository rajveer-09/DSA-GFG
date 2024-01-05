//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
         unordered_map<int,int>xp;
        int count=0;
        if(n<m)
        {
        for(int i=0;i<m;i++)
        {
            xp[b[i]]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(xp[a[i]]==1)
            {
            count++;
            xp[a[i]]=0;
            }
        }
        }
       else
        {
        for(int i=0;i<n;i++)
        {
            xp[a[i]]=1;
        }
        for(int i=0;i<m;i++)
        {
            if(xp[b[i]]==1)
            {
            count++;
            xp[b[i]]=0;
            }
        }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends