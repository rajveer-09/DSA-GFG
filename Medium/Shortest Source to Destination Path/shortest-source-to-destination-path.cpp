//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        queue<pair<int,pair<int,int>>> q;//{steps,{row,col}}
       vector<vector<int>> dist(N, vector<int>(M,1e9));
       int drow[4]={1,0,-1,0};
       int dcol[4]={0,1,0,-1};
          if (A[0][0] == 0) {
            return -1;
        }
       q.push({0,{0,0}}); dist[0][0]=0;
       while(!q.empty()){
           int d=q.front().first;
           int r=q.front().second.first;
           int c=q.front().second.second;
           q.pop();
            if(r==X && c==Y) return dist[X][Y];
           for(int i=0;i<4;i++){
               int nrow=r+drow[i];
               int ncol=c+dcol[i];
               if(nrow>=0 && ncol>=0 && nrow<N && ncol<M &&
               A[nrow][ncol]==1){
                   if(d+1<dist[nrow][ncol]){
                       dist[nrow][ncol]=d+1;
                       q.push({dist[nrow][ncol],{nrow,ncol}});
                   }
               }
           }
       }
       return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends