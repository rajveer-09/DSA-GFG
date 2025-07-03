class Solution {
public:
    int n;
    void solve(vector<vector<int>>& grid, int i, int j, string& path, vector<string>& ans, vector<vector<int>>& vis) {
        if(i == n - 1 && j == n - 1) {
            ans.push_back(path);
            return;
        }

        vis[i][j] = 1;

        // Down
        if(i + 1 < n && grid[i + 1][j] == 1 && !vis[i + 1][j]) {
            path += 'D';
            solve(grid, i + 1, j, path, ans, vis);
            path.pop_back();
        }

        // Up
        if(i - 1 >= 0 && grid[i - 1][j] == 1 && !vis[i - 1][j]) {
            path += 'U';
            solve(grid, i - 1, j, path, ans, vis);
            path.pop_back();
        }

        // Right
        if(j + 1 < n && grid[i][j + 1] == 1 && !vis[i][j + 1]) {
            path += 'R';
            solve(grid, i, j + 1, path, ans, vis);
            path.pop_back();
        }

        // Left
        if(j - 1 >= 0 && grid[i][j - 1] == 1 && !vis[i][j - 1]) {
            path += 'L';
            solve(grid, i, j - 1, path, ans, vis);
            path.pop_back();
        }

        vis[i][j] = 0; // unmark
    }

    vector<string> ratInMaze(vector<vector<int>> &grid) {
        n = grid.size();

        vector<string> ans;
        if(grid[0][0] == 0 || grid[n - 1][n - 1] == 0) return ans;

        vector<vector<int>> vis(n, vector<int>(n, 0));

        string path = "";

        solve(grid, 0, 0, path, ans, vis);
        
        sort(ans.begin(), ans.end());

        return ans;
    }
};
