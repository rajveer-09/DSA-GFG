class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int, int>mpp;
        
        int ans = 0;
        
        for(int i = 0; i < arr.size(); i++){
            int comp = target - arr[i];
            
            ans += mpp[comp];
            
            mpp[arr[i]]++;
        }
        
        return ans;
    }
};