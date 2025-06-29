// User function Template for C++

class Solution
{
public:
    void dfs(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& vis, vector<int>&path){
        int n = grid.size();
        int m = grid[0].size();

        if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0 || vis[i][j]){
            path.push_back(-1);
            return;
        }

        vis[i][j] = true;
        path.push_back(grid[i][j]);

        
        dfs(grid, i - 1, j, vis, path);
        dfs(grid, i + 1, j, vis, path);
        dfs(grid, i, j + 1, vis, path);
        dfs(grid, i, j - 1, vis, path);
    }
    int countDistinctIslands(vector<vector<int>> &grid){
        int n = grid.size();
        int m = grid[0].size();

        set<vector<int>> st;
        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!vis[i][j] && grid[i][j] == 1){
                    vector<int> path;
                    dfs(grid, i, j, vis, path);
                    st.insert(path);
                }
            }
        }

        return st.size();

    }
};
