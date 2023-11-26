//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to detect cycle using DSU in an undirected graph.
	vector<int> parent;
    
    vector<int> rank;
    
    int find(int x)
    {
        if(parent[x] == x)
        {
            return x;
        }
        
        parent[x] = find(parent[x]);
        
        return parent[x];
    }
    
    void union1(int x, int y)
    {
        int x_rep = find(x);
        
        int y_rep = find(y);
        
        if(x_rep == y_rep)
        {
            return;
        }
        
        if(rank[x_rep] < rank[y_rep])
        {
            parent[x_rep] = y_rep;
        }
        
        else if(rank[x_rep] > rank[y_rep])
        {
            parent[y_rep] = x_rep;
        }
        
        else
        {
            parent[y_rep] = x_rep;
            
            rank[x_rep]++;
        }
    }
    
    int detectCycle(int V, vector<int>adj[])
    {
        parent.resize(V);
        
        rank.resize(V);
        
        for(int i = 0; i < V; i++)
        {
            parent[i] = i;
            
            rank[i] = 0;
        }
        
        set<pair<int, int>> s;
        
        for(int v = 0; v < V; v++)
        {
            for(auto u : adj[v])
            {
                if(s.find({u, v}) != s.end() or s.find({v, u}) != s.end())
                {
                    continue;
                }
                
                s.insert({u, v});
                
                int u_rep = find(u);
                
                int v_rep = find(v);
                
                if(u_rep == v_rep)
                {
                    return true;
                }
                
                union1(u, v);
            }
        }
        
        return false;}
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
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends