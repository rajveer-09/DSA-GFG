class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
    long long n = arr.size();
        
        long long totalsum = (n + 1)*(n + 2) / 2;
        
        long long sum = 0;
        
        for(int i = 0; i < arr.size(); i++){
            sum += arr[i];
        }
        
        return (int)totalsum - sum;
        
    }
};

/*

1 +2 + 3 +....+ n = n * (n + 1) / 2;
*/