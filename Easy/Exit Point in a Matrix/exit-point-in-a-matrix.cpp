//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& mat) {
        // Code here
        int previ = 0,prevj = -1;
        int i=0,j=0;
        while(i>=0 and j>=0 and j<m and i<n){
            if(mat[i][j] == 0){
                if(previ==i){
                    if(prevj < j){//--->
                        prevj = j;
                        j++;
                    }
                    else{//<---
                        prevj = j;
                        j--;
                    }
                }
                else{
                    if(previ < i){
                        previ = i;
                        i++;
                    }
                    else{
                        previ = i;
                        i--;
                    }
                }
            }
            else{
                mat[i][j] = 0;
                if(previ==i){  
                    if(prevj < j){//--->
                        prevj = j;
                        i++;
                    }
                    else{ // <--
                        prevj = j;
                        i--;
                    }
                }
                else{
                    if(previ < i){
                        previ = i;
                        j--;
                    }
                    else{
                        previ = i;
                        j++;
                    }
                }
            }
        }
        return {previ,prevj};
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends