//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    bool isPossible(vector<int>& nums, int k, int mid){
        int cnt = 1, last = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] - last >= mid){
                cnt++;
                last = nums[i];
            }
            if(cnt > k) break;
        }

        return cnt >= k;
    }

    int solve(int n, int k, vector<int> &nums) {
    
        // Write your code here
        sort(nums.begin(), nums.end());

        int i = 0, j = nums[n-1] - nums[0];

        int ans = INT_MAX;

        while(i <= j){
            int mid = i + (j - i)/2;

            if(isPossible(nums, k, mid)){
                ans = mid;
                i = mid + 1;
            }
            else j = mid - 1;
        }

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends