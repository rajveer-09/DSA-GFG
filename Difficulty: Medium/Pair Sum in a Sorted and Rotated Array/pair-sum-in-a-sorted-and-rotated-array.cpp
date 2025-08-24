class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
    bool incre = true;
        int idx = 0; int l = 0, r = arr.size()-1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i] <= arr[i+1]) idx ++;
        }
        if(idx <= 1) {
        incre = false;
        l = arr.size()-1;
        for(int i=0;i<arr.size()-1;i++) if(arr[i] < arr[i+1]) l = i;
}
        else {
        l = 0;
        for(int i=0;i<arr.size()-1;i++) if(arr[i] > arr[i+1]) l = i+1;
}
vector<int> res;
        if(incre == true){
        for(int i=l;i<arr.size();i++) res.push_back(arr[i]);
        if(l>0) for(int i=0;i<l;i++)res.push_back(arr[i]);
}
        else{
        for(int i=l;i>=0;i--)res.push_back(arr[i]);
        if(l<arr.size())for(int i=arr.size()-1;i>l;i--) res.push_back(arr[i]);
}
l = 0;
while(l < r){
            int mid = res[l] + res[r];
            if(mid == target) return true;
            else if(mid > target) r --;
            else l ++;
        }
        return false;
    }
};