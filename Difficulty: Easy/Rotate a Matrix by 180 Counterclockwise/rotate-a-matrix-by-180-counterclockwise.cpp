class Solution {
  public:
    void rotateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
  
        vector<vector<int>> res(n, vector<int>(n));
      
        // move mat[i][j] to mat[n-i-1][n-j-1]
        // 2 times 90 deg rotation
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                res[i][j] = mat[n - i - 1][n - j - 1];
            }
        }
        
        mat = res;
    }
};