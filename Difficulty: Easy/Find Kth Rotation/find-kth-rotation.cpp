//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &nums) {
        // Code Here
        int n = nums.size();
        int i = 0, j = n-1;

        int ans = INT_MAX;
        int idx = -1;
        while(i <= j){
            int m = i + (j - i) / 2;

            if(nums[m] >= nums[i]){
                if(nums[i] < ans){
                    idx = i;
                    ans = nums[i];
                }
                i = m + 1;
            }
            else{
                if(nums[m] < ans){
                    idx = m;
                    ans = nums[m];
                }
                j = m - 1;
            }
        }

        return idx;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
    }
}
// } Driver Code Ends