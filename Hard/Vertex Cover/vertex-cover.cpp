//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
         int solve(int ind,vector<pair<int,int>>&edges,vector<int>&vis){
        if(ind>=edges.size()){
            return 0;
        }
        int a=edges[ind].first;
        int b=edges[ind].second;
        if(vis[a]==0 && vis[b]==0){
            vis[a]=1;
            int val1=1+solve(ind+1,edges,vis);
            vis[a]=0;
            vis[b]=1;
            int val2=1+solve(ind+1,edges,vis);
            vis[b]=0;
            return min(val1,val2);
        }
        return solve(ind+1,edges,vis);
        
    }
        int vertexCover(int n, vector<pair<int, int>> &edges) {
                vector<int>vis(n+1,0);
                return solve(0,edges,vis);
            }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> edges;
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            edges.push_back({a,b});
        }
        Solution s;
        cout<<s.vertexCover(n,edges)<<endl;
    }
    return 0;
}
// } Driver Code Ends