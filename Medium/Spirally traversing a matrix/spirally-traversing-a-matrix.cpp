//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
          int k = 0, m = r;
        int l = 0, n = c;
        int i;
        vector<int> ans;
        
        while(k < m && l < n){
            
            for(i = l; i < n; i++){
                ans.push_back(matrix[k][i]);
            }
            k++;
            
            for(i = k; i < m; i++){
                ans.push_back(matrix[i][n - 1]);
            }
            n--;
            
            if(k < m){
                for(i = n - 1; i >= l; i--){
                    ans.push_back(matrix[m - 1][i]);
                }
                m--;
            }
            
            if(l < n){
                for(i = m - 1; i >= k; i--){
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends