class Solution {
public:
    int maxLen(vector<int> &arr) {
        int n = arr.size();
        
        unordered_map<int, int> mp;
        mp[0] = -1;
        int sum = 0;
        int maxLen = 0;

        for (int i = 0; i < n; i++) {
            if(arr[i] > 0) sum++;
            else sum--;
            
            if (mp.count(sum)) {
                maxLen = max(maxLen, i - mp[sum]);
            } else {
                mp[sum] = i;
            }
        }
        
        return maxLen;
    }
};