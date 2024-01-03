//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
         vector<vector<int>> vis(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        
        int dx[4] = {0,1,0,-1};
        int dy[4] = {1,0,-1,0};
        

// adding all boundary's O to queue and marking the visited array 1
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((i==0 || i==n-1 || j==0 ||j==m-1) && mat[i][j]=='O'){
                    q.push({i,j});
                    vis[i][j]=1;
                }
            }
        }
        
        while(!q.empty()){
            
            int x = q.front().first;
            int y = q.front().second;
            
            q.pop();
            
            for(int dir=0;dir<4;dir++){
                int nx = x+dx[dir];
                int ny = y+dy[dir];
                // if not visited and the character at nx and ny is 'O' then we can go there
                if(nx>=0 && ny>=0 && nx<n && ny<m && !vis[nx][ny] && mat[nx][ny]=='O'){
                    vis[nx][ny]=1;
                    q.push({nx,ny});
                }
            }
        }

 

// checking which O's is not visited 

// O's will not be visited iff it is surrounded by X
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && mat[i][j]=='O'){
                    mat[i][j]='X';
                }
            }
        }
        
        return mat;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends