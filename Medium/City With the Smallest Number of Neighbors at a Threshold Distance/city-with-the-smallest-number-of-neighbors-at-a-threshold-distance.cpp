//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges, int distanceThreshold) {
        // Your code here
        vector <pair<int,int>> adj[n];
        set <int> v[n];
        for(int i = 0; i < edges.size(); i++) {
            adj[edges[i][0]].push_back({edges[i][1], edges[i][2]});
            adj[edges[i][1]].push_back({edges[i][0], edges[i][2]});
        }
        
        queue <pair<int,int>> q;
        for(int i = 0; i < n; i++) {
            q.push({i, distanceThreshold});
            vector <int> vis(n, -1);
            vis[i] = distanceThreshold;
            
            while(!q.empty()) {
                int node = q.front().first;
                int dist = q.front().second;
                q.pop();
                if(i != node) {
                    v[i].insert(node);
                }
                    
                for(auto it = adj[node].begin(); it != adj[node].end(); it++) {
                    if((vis[it->first] == -1 || vis[it->first] <= dist-it->second) && dist - it->second >= 0) {
                        q.push({it->first, dist-it->second});
                        vis[it->first] = dist-it->second;
                    }
                }
            }
        }
        int ans = -1, s = INT_MAX;
        for(int i = 0; i < n; i++) {
            if(s >= v[i].size()) {
                ans = i;
                s = v[i].size();
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends