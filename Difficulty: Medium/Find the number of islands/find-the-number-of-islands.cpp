//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
private:
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<bool>>& visited, int n, int m) {
        // Directions for moving in 8 possible directions (horizontally, vertically, diagonally)
        int dRow[] = {-1, -1, -1, 0, 1, 1, 1, 0};
        int dCol[] = {-1, 0, 1, 1, 1, 0, -1, -1};
        
        // Mark this cell as visited
        visited[i][j] = true;
        
        // Explore all 8 possible directions
        for (int k = 0; k < 8; k++) {
            int newRow = i + dRow[k];
            int newCol = j + dCol[k];
            
            // Check if the new cell is within bounds, is land ('1'), and is not yet visited
            if (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && 
                grid[newRow][newCol] == '1' && !visited[newRow][newCol]) {
                dfs(newRow, newCol, grid, visited, n, m);
            }
        }
    }
    
public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        // Visited grid to track the cells we have already processed
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        int numIslands = 0;
        
        // Iterate through each cell in the grid
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                // If the cell is land ('1') and not visited, it's a new island
                if (grid[i][j] == '1' && !visited[i][j]) {
                    numIslands++;
                    dfs(i, j, grid, visited, n, m);  // Perform DFS to mark the entire island
                }
            }
        }
        
        return numIslands;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends