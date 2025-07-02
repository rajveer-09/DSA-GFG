// User function Template for C++

// User function Template for C++

class Solution {
  public:
    vector<int> replaceWithRank(vector<int> &l, int N) {
        vector<int>ans;
        vector<int>arr = l;
        
        sort(arr.begin(),arr.end());
        unordered_map<int,int>p;
        int rank = 1;
        
        for(int i=0;i<N;i++){
            if(i > 0 && arr[i] == arr[i - 1]){
                p[arr[i]]= p[arr[i - 1]];
            }
            else {
                p[arr[i]] = rank++;
            }
              
        }
        for(int i=0;i<l.size();i++){
            ans.push_back(p[l[i]]);
        }
        return ans ;
    }
};