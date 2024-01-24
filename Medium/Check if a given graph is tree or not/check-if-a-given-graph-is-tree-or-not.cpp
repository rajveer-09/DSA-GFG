//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Matrix
{
public:
    template <class T>
    static void input(vector<vector<T>> &A,int n,int m)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d ",&A[i][j]);
            }
        }
    }
 
    template <class T>
    static void print(vector<vector<T>> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            for (int j = 0; j < A[i].size(); j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends
class Solution {
  public:
    int isTree(int n, int m, vector<vector<int>> &adj) {
        // code here
        vector<int> ad[n];
        for(auto it:adj){
            int u=it[0];
            int v=it[1];
            ad[u].push_back(v);
            ad[v].push_back(u);
        }
        vector<int>vis(n,0);
        vis[0]=1;
        queue<pair<int,int>> q;
        q.push({0,-1});
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto it:ad[node]){
                if(vis[it]==0){
                    vis[it]=1;
                    q.push({it,node});
                }
                else if(it!=parent){
                    return 0;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(vis[i]==0){
                return 0;
            }
        }
        return 1;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n; 
        scanf("%d",&n);
        
        
        int m; 
        scanf("%d",&m);
        
        
        vector<vector<int>> edges(m, vector<int>(2));
        Matrix::input(edges,m,2);
        
        Solution obj;
        int res = obj.isTree(n, m, edges);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends