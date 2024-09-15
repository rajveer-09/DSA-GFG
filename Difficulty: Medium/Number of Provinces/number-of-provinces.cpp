//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(vector<int> adj[], int st, vector<bool>& visited){
        visited[st] = true;

        for(int it : adj[st]){
            if(!visited[it]){
                dfs(adj, it, visited);
            }
        }
        return;
    }
    int numProvinces(vector<vector<int>> Adj, int V) {
        // code here
        vector<int> adj[V];
        
        for(int i = 0; i < V; i++){
            for(int j = 0; j < V; j++){
                if(Adj[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<bool> visited(V, false);

        int cnt = 0;
    
        for(int i = 0; i < V; i++){
            if(!visited[i]){
                cnt++;
                dfs(adj, i, visited);
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends