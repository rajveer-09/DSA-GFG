//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isValid(int i,int j,int n){
        return (i>=0 && i<n && j>=0 && j<n);
    }
public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
        vector<int> ans;
        int n=matrix.size();
        
        int i=0,j=0;
        while(j<n){
            int x=i,y=j;
            ans.push_back(matrix[x][y]);
            while(isValid(++x,--y,n)){
                ans.push_back(matrix[x][y]);
            }
            j++;
        }
        
        i++;j--;
        
        while(i<n){
            int x=i,y=j;
            ans.push_back(matrix[x][y]);
            while(isValid(++x,--y,n)){
                ans.push_back(matrix[x][y]);
            }
            i++;
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
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends