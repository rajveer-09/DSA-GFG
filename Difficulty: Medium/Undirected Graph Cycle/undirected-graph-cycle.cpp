//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    bool isCyclic(vector<int> adj[], int st, int pre, vector<int>& visited) {
        visited[st] = true;

        for (auto it : adj[st]) {
            if (!visited[it]) {
                bool flg = isCyclic(adj, it, st, visited);
                if (flg) return true;
            }
            else {
                if (it != pre) return true;
            }
        }

        return false;
    }

    bool isCycle(int V, vector<int> adj[]) {
        vector<int> visited(V, false);
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                bool flg = isCyclic(adj, i, -1, visited);
                if (flg) return true;
            }
        }

        return false;
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