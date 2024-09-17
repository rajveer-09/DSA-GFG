//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    // Function to find a Mother Vertex in the Graph.
    int findMotherVertex(int V, vector<int> adj[]) {
        // Step 1: Perform a DFS traversal to find the last finished vertex.
        vector<bool> visited(V, false);
        int lastFinishedVertex = -1;
        
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                dfs(i, adj, visited);
                lastFinishedVertex = i;
            }
        }
        
        // Step 2: Check if the last finished vertex is a Mother Vertex.
        fill(visited.begin(), visited.end(), false);
        dfs(lastFinishedVertex, adj, visited);
        
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                return -1; // No Mother Vertex found
            }
        }
        
        return lastFinishedVertex;
    }

private:
    void dfs(int v, vector<int> adj[], vector<bool>& visited) {
        visited[v] = true;
        
        for (int u : adj[v]) {
            if (!visited[u]) {
                dfs(u, adj, visited);
            }
        }
    }
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
		}
		Solution obj;
		int ans = obj.findMotherVertex(V, adj);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends