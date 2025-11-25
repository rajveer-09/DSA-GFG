class Solution {
  public:
    long subarrayXor(vector<int> &nums, int k) {
        // code here
        int n = nums.size();
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int xorr = 0;
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            xorr ^= nums[i];
            
            ans += mpp[xorr ^ k];
            
            mpp[xorr]++;
        }
        
        return ans;
        
    }
};