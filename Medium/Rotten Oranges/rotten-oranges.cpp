//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        queue<pair<int,int>> q;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> rottingTime(n, vector<int>(m,-1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({i,j});
                    rottingTime[i][j] = 0;
                }
            }
        }
        
        if (q.empty()) return 0;
        
        int dir[4][2] = {{-1,0}, {0,1}, {1,0}, {0,-1}};
        
        while(!q.empty()) {
            pair<int, int> p = q.front();
            int i = p.first;
            int j = p.second;
            
            q.pop();
            
            for (int k = 0; k < 4; k++) {
                int ni = dir[k][0] + i;
                int nj = dir[k][1] + j;
                
                if (ni >= 0 && ni < n && nj >= 0 && nj < m && rottingTime[ni][nj] == -1 && grid[ni][nj] == 1) {
                    q.push({ni,nj});
                    rottingTime[ni][nj] = rottingTime[i][j] + 1;
                }
            }
        }
        int maxTime = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1 && rottingTime[i][j] == -1) return -1;
                maxTime = max(maxTime,rottingTime[i][j]);
            }
        }
        return maxTime;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends