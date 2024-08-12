//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int> arr, int n, long long s) {
        // Your code here
        vector<int> result(2,0);
        int sum=0;
        for (int i=0;i<n;i++){
            sum+=arr[i];
            if (sum == s){
                result[0]=result[0]+1;
                result[1]=i+1;
                return result;
            }
            while (sum > s && result[0]<i) {
                sum-=arr[result[0]++];
                if (sum == s){
                    result[0] = result[0]+1;
                    result[1]=i+1;
                    return result;
                }
                
            }
        }
        if (sum!=s) {
            result.clear();
            result.push_back(-1);
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s;
        cin >> n >> s;
        vector<int> arr(n);
        // int arr[n];
        const int mx = 1e9;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> res;
        res = ob.subarraySum(arr, n, s);

        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends