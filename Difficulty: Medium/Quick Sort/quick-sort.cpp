class Solution {
  public:
    void quickSort(vector<int>& nums, int l, int h) {
        // code here
        if(l >= h) return;
        
        int p = partition(nums, l, h);

        quickSort(nums, l, p - 1);
        quickSort(nums, p + 1, h);
    }

  public:
    int partition(vector<int>& nums, int l, int h) {
        
        // code here
        int st = l;

        for(int i = l; i < h; i++){
            if(nums[i] < nums[h]){
                swap(nums[st], nums[i]);
                st++;
            }
        }

        swap(nums[st], nums[h]);
        return st;
    }
};