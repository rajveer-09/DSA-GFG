class Solution {
public:
    vector<string> ans;
    string path;
    int n, m;

    void solve(int i, int j, vector<vector<int>>& maze, vector<vector<int>>& vis) {
        // reached destination
        if(i == n-1 && j == m-1){
            ans.push_back(path);
            return;
        }
        
        // mark visited
        vis[i][j] = 1;
        
        // U (Up)
        if(i-1 >= 0 && maze[i-1][j] == 1 && !vis[i-1][j]){
            path.push_back('U');
            solve(i-1, j, maze, vis);
            path.pop_back();
        }

        // D (Down)
        if(i+1 < n && maze[i+1][j] == 1 && !vis[i+1][j]){
            path.push_back('D');
            solve(i+1, j, maze, vis);
            path.pop_back();
        }

        // L (Left)
        if(j-1 >= 0 && maze[i][j-1] == 1 && !vis[i][j-1]){
            path.push_back('L');
            solve(i, j-1, maze, vis);
            path.pop_back();
        }

        // R (Right)
        if(j+1 < m && maze[i][j+1] == 1 && !vis[i][j+1]){
            path.push_back('R');
            solve(i, j+1, maze, vis);
            path.pop_back();
        }

        // unmark
        vis[i][j] = 0;
    }

    vector<string> ratInMaze(vector<vector<int>>& maze) {
        n = maze.size();
        m = maze[0].size();

        if(maze[0][0] == 0) return {};

        vector<vector<int>> vis(n, vector<int>(m, 0));
        solve(0, 0, maze, vis);

        sort(ans.begin(), ans.end());
        return ans;
    }
};
