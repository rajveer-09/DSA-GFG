class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        deque<int> dq;
        int st = 0;
        vector<int> ans;
        
        for(int i = 0; i < arr.size(); i++){
            if(arr[i] < 0){
                dq.push_back(arr[i]);
            }
            if(i - st + 1 == k){
                if(!dq.empty()){
                    ans.push_back(dq.front());
                    
                    if(arr[st] < 0){
                        dq.pop_front();
                    }
                }
                else{
                    ans.push_back(0);
                }
                st++;
            }
        }
        
        return ans;
    }
};