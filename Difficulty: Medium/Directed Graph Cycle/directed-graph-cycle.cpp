class Solution {
  public:
    bool check(vector<int> adj[], int node, vector<int>& pathVis, vector<int>&vis){
        vis[node] = 1;
        pathVis[node] = 1;
        
        for(int ngh : adj[node]){
            if(!vis[ngh]){
                if(check(adj, ngh, pathVis, vis)) return true;
            }
            else if(pathVis[ngh]) return true;
            
        }
        pathVis[node] = 0;
        
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<int> adj[V];
        
        for(auto ed : edges){
            adj[ed[0]].push_back(ed[1]);
        }
        
        vector<int> vis(V, 0);
        vector<int> pathVis(V, 0);
        
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(check(adj, i, pathVis, vis)) return true;
            }
        }
        
        return false;
    }
};