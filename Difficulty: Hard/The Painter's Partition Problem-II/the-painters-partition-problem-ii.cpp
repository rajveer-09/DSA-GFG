//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
      bool helper(vector<int>& arr, int mid, int k){
          int sum = 0;
          
          int cnt = 1;
          
          for(int i = 0; i < arr.size(); i++){
              
              if(sum + arr[i] > mid){
                  sum = arr[i];
                  cnt++;
                  if(cnt > k) return false;
              }
              else{
                  sum += arr[i];
              }
          }
          
          return true;
      }
    int minTime(vector<int>& arr, int k) {
        // code here
        // return minimum time
        int st = *max_element(arr.begin(), arr.end());
        int ed = accumulate(arr.begin(), arr.end(), 0);
        
        int ans = -1;
        
        while(st <= ed){
            int mid = st + (ed - st) / 2;
            
            if(helper(arr, mid, k)){
                ans = mid;
                ed = mid - 1;
            }
            else{
                st = mid + 1;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int k;
        cin >> k;
        cin.ignore();
        Solution obj;
        cout << obj.minTime(arr, k) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends