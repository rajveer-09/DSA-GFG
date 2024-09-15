//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
private:
    bool bfs(int i, vector<int> adj[], vector<bool>& visited) {
        queue<pair<int, int>> q;
        q.push({i, -1});
        visited[i] = true;

        while(!q.empty()) {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();

            for(auto it : adj[node]) {
                if(!visited[it]) {
                    visited[it] = true;
                    q.push({it, node});
                } 
                else if(it != parent) {
                    return true;
                }
            }
        }
        return false;
    }

public:
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> visited(V, false);
        bool ans = false;

        for(int i = 0; i < V; i++) {
            if(!visited[i]) {
                ans = bfs(i, adj, visited);
                if(ans) break;
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends