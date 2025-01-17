//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // code here
        int n = nums.size();
        int p = 1;
        int cnt = 0;
        vector<int> ans(n, 0);

        for(int i = 0; i < n; i++){
            if(nums[i] == 0) cnt++;
            else{
                p *= nums[i];
            }

            if(cnt > 1) return ans;
        }

        for(int i  = 0; i < n; i++){
            if(cnt == 1 && nums[i] == 0){
                ans[i] = p;
            }
            else if(cnt == 0){
                ans[i] = p / nums[i];
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

        Solution obj;
        vector<int> res = obj.productExceptSelf(arr);

        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends