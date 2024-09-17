//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    void dfs(vector<vector<int>>& adj, int start, int& count, int destination, int parent) {
        if (start == destination) {
            count++;
            return;
        }
        
        for (int i : adj[start]) {
            if (i != parent) {
                dfs(adj, i, count, destination, start);
            }
        }
    }

    int possible_paths(vector<vector<int>> edges, int n, int start, int destination) {
        // Create adjacency list
        vector<vector<int>> adj(n);
        
        for (const auto& edge : edges) {
            adj[edge[0]].push_back(edge[1]);
        }
        
        int cnt = 0;
        dfs(adj, start, cnt, destination, -1);
        
        return cnt;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m, s, d;
        cin >> n >> m >> s >> d;
        vector<vector<int>> edges;
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            edges.push_back({u, v});
        }
        Solution obj;
        int ans = obj.possible_paths(edges, n, s, d);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends