//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template
class Solution {
  public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex src.
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
        // Code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        int V=adj.size();
        vector<int> dist(V,1e9);
        dist[src]=0;
        pq.push({0,src});
        
        while (!pq.empty()){
            int dis=pq.top().first;
            int node=pq.top().second;
            pq.pop();
            
            for (auto it: adj[node]){
                int adjNode=it.first;
                int edgeWeight=it.second;
                
                if (dis+edgeWeight <dist[adjNode]){
                    dist[adjNode]=dis+edgeWeight ;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        }
        return dist;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<pair<int, int>>> adj(V);
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            pair<int, int> t1 = {v, w}, t2 = {u, w};
            adj[u].push_back(t1);
            adj[v].push_back(t2);
        }
        int src;
        cin >> src;
        cin.ignore();

        Solution obj;
        vector<int> res = obj.dijkstra(adj, src);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends