class Solution {
public:
    int minSwaps(vector<int>& data) {

        int tt = accumulate(data.begin(), data.end(), 0);
        
        if(tt == 0) return -1;
        
        int cnt = 0;
        int st = 0;
        int ans = 0;

        for(int i = 0; i < data.size(); i++){
            cnt += data[i];

            if(i - st + 1 == tt){
                ans = max(ans, cnt);

                cnt -= data[st];
                st++;
            }
        }

        return tt - ans;
    }
};