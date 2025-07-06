

class Solution {
  public:
    // Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix) {
        vector<int> result;
        int n = matrix.size();
        int m = matrix[0].size();
        
        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                // Left to right
                for (int j = 0; j < m; ++j){
                    result.push_back(matrix[i][j]);
                }
                    
            } else {
                // Right to left
                for (int j = m - 1; j >= 0; --j){
                    result.push_back(matrix[i][j]);
                }

            }
        }
        
        return result;
        
    }
};