class Solution {
  public:
    bool check(vector<int> adj[], int node, int parent, vector<int>& vis){
        vis[node] = 1;
        
        for(int ngh : adj[node]){
            if(!vis[ngh]){
                if(check(adj, ngh, node, vis)){
                    return true;
                }
            }
            else if(ngh != parent) return true;
        }
        
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<int> adj[V];
        
        for(auto ed : edges){
            adj[ed[0]].push_back(ed[1]);
            adj[ed[1]].push_back(ed[0]);
        }
        
        vector<int> vis(V, 0);
        
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(check(adj, i, -1, vis)) return true;
            }
        }
        
        return false;
        
    }
};