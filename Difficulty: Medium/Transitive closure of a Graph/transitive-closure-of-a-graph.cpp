//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

class Solution {
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph) {
        // Create adjacency list
        vector<int> adj[N];
        
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (graph[i][j] == 1) {
                    adj[i].push_back(j);
                }
            }
        }
        
        vector<vector<int>> visited(N, vector<int>(N, 0));
        
        for (int i = 0; i < N; i++) {
            dfs(adj, i, i, visited);
        }
        
        return visited;
    }

private:
    void dfs(vector<int> adj[], int src, int v, vector<vector<int>>& visited) {
        visited[src][v] = 1;
        
        for (auto it : adj[v]) {
            if (!visited[src][it]) {
                dfs(adj, src, it, visited);
            }
        }
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends