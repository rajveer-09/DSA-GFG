//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
     void solve(vector<int> &arr,int n,set<vector<int>>&st,int index){
     
     if(index==n)
      return ;
     
     for(int i=index;i<n;i++){
         
         swap(arr[index],arr[i]);
          st.insert(arr);
         
         solve(arr,n,st,index+1);
         
         swap(arr[index],arr[i]);  //backtrack
     }
     
 }
  
  
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
      
      set<vector<int>>st;
      solve(arr,n,st,0);
      
      vector<vector<int>>ans;
      for(auto x:st){
          ans.push_back(x);
      }
      
      return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0 ; i<n ; i++)
            cin>>arr[i];

        Solution ob;
        vector<vector<int>> res = ob.uniquePerms(arr,n);
        for(int i=0; i<res.size(); i++)
        {
            for(int j=0; j<n; j++)
            {
                cout<<res[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends