//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
         int n = image.size(),m = image[0].size();
        queue<pair<int,int>> q;
        q.push({sr,sc});
        vector<vector<int>> vis(n,vector<int>(m,0));
        vis[sr][sc] = 1;
        int startPix = image[sr][sc];
        int newRow[] = {-1,0,1,0};
        int newCol[] = {0,-1,0,1};
        while(!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            image[i][j] = newColor;
            for(int k=0;k<4;k++) {
                int nr = i + newRow[k];
                int nc = j + newCol[k];
                
                if(nr >= 0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && image[nr][nc]==startPix) {
                    q.push({nr,nc});
                    vis[nr][nc]=1;
                }
            }
        }
        return image;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends