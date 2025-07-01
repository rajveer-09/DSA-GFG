class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        vector<vector<pair<int, int>>> adj(V);

        for (auto &e : edges) {
            int u = e[0], v = e[1], wt = e[2];
            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }


        vector<long long> dist(V, LLONG_MAX);
        dist[src] = 0;

        queue<int> q;
        q.push(src);

        while (!q.empty()) {
            int u = q.front(); q.pop();

            for (auto &it : adj[u]) {
                int v = it.first;
                int wt = it.second;
                if (dist[u] + wt < dist[v]) {
                    dist[v] = dist[u] + wt;
                    q.push(v);
                }
            }

        }

        vector<int> ans(V);
        for (int i = 0; i < V; ++i) {
            if (dist[i] == LLONG_MAX)
                ans[i] = 1e9;
            else
                ans[i] = static_cast<int>(dist[i]);
        }

        return ans;
    }
};
