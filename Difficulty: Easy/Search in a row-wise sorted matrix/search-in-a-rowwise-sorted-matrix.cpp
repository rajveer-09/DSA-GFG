//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
public:
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        bool res = false;
        for (auto i:mat) {
            int n = i.size();
            int l = 0;
            int r = n-1;
            int mid = (l+r)/2;
            while(l<=r) {
                mid = (l+r)/2;
                if (i[mid] == x) return true;
                else if (i[mid]>x) r = mid-1;
                else l = mid+1;
            }
            
        }
        return false;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n, m;
        cin >> n >> m;
        vector<vector<int> > matrix(n);

        for (int i = 0; i < n; i++) {
            matrix[i].assign(m, 0);
            for (int j = 0; j < m; j++) {
                cin >> matrix[i][j];
            }
        }

        int x;
        cin >> x;
        Solution obj;
        if (obj.searchRowMatrix(matrix, x))
            cout << "true\n";
        else
            cout << "false\n";

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends