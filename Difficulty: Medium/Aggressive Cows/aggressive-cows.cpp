//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int check(int& dis, vector<int>& nums, int& k){
        int cnt = 1;
        int st = nums[0];
        for(int  i = 1; i < nums.size(); i++){
            if(nums[i] - st >= dis){
                st = nums[i];
                cnt++;
            }
            if(cnt >= k) break;
        }

        return cnt >= k;
    }
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        int high = nums[n - 1] - nums[0];
        int low  = 0;

        int ans = INT_MIN;

        while(low <= high){
            int mid = low + (high - low) / 2;
            if(check(mid, nums, k)){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }

        }

        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int k;
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string in;
        getline(cin, in);
        stringstream sss(in);
        int num;
        while (sss >> num) {
            k = num;
        }
        Solution ob;
        int ans = ob.aggressiveCows(arr, k);
        cout << ans << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends