//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    vector<int> maximumToys(int N, vector<int> A, int Q, vector<vector<int>> Queries) {
         vector<long long> prefSum(N);
      vector<pair<long long, long long>> track;
      for(int i=0; i<N; i++) {
          track.push_back({A[i], i});
      }
      sort(track.begin(), track.end());
      vector<int> ind_mp(N);
      for(int i=0; i<N; i++) {
          ind_mp[track[i].second] = i;
      }
      prefSum[0] = track[0].first;
      for(int i=1; i<N; i++) {
          prefSum[i] = prefSum[i-1] + track[i].first;
      }
      vector<int> ans;
      for(auto& q: Queries) {
          int c = q[0];
          int ind = upper_bound(prefSum.begin(), prefSum.end(), c) - prefSum.begin();
          int cnt = ind;
          if(cnt==0 or q.size()==2) {
              ans.push_back(cnt);
              continue;
          }
          set<int> st;
          int left = c - prefSum[ind - 1];
          for(int i=2; i<q.size(); i++) {
              st.insert(q[i] - 1);
              if(ind_mp[q[i]-1]<ind) {
                  --cnt;
                  left += A[q[i] - 1];
              }
          }
          for(int i=ind; i<N; i++) {
              if(st.count(track[i].second)) {
                  continue;
              }
              if(left - track[i].first < 0) break;
              ++cnt;
              left -= track[i].first;
          }
          ans.push_back(cnt);
      }
      return ans;
    }
};



//{ Driver Code Starts.
int main() {
 int t=1;
 cin>>t;
 for(int i=1;i<=t;i++){
    int N;
    cin>>N;
    vector<int>A(N);
    for(auto &i:A){
      cin>>i;
    }
    int Q;
    cin>>Q;
    vector<vector<int>> Queries(Q);
    for(int i=0;i<Q;i++){
      int x,y;
      cin>>x>>y;
      Queries[i].push_back(x);
      Queries[i].push_back(y);
      for(int j=0;j<Queries[i][1];j++){
        cin>>x;
        Queries[i].push_back(x);
      }
    }
    Solution obj;
    auto ans =obj.maximumToys(N,A,Q,Queries);
    for(auto i:ans)
      cout<<i<<" ";
    cout<<endl;
 
cout << "~" << "\n";
}
}
// } Driver Code Ends