//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(int node, vector<int> adj[], vector<bool>& visited){
        visited[node] = true;

        for(int it : adj[node]){
            if(!visited[it]){
                dfs(it, adj, visited);
            }
        }
    }
    int numProvinces(vector<vector<int>> isConnected, int V) {
        // code here
        int n = isConnected.size();
        vector<int> adj[n];

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(isConnected[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        int cnt = 0;

        vector<bool> visited(n);

        for(int i = 0; i < n; i++){
            if(!visited[i]){
                cnt++;
                dfs(i, adj, visited);
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