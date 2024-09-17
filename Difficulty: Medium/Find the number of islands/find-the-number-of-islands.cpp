//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<bool>> visited(n, vector<bool>(m, false));
        
        int cnt = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    cnt++;
                    bfs(grid, i, j, visited);
                }
            }
        }
        
        return cnt;
    }
  private :
      void bfs(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& visited){
          int n = grid.size();
          int m = grid[0].size();
          
          visited[i][j] = true;
          
          queue<pair<int, int>> q;
          
          q.push({i, j});
          
          while(!q.empty()){
              auto front = q.front();
              int x = front.first;
              int y = front.second;
              
              q.pop();
              
              for(int i = -1; i <= 1; i++){
                  for(int j = -1; j <= 1; j++){
                      int row = x + i;
                      int col = y + j;
                      
                      if(row < 0 || row >= n || col < 0 || col >= m) continue;
                      
                      if(!visited[row][col] && grid[row][col] == '1'){
                          q.push({row, col});
                          visited[row][col] = true;
                      }
                  }
              }
          }
        
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