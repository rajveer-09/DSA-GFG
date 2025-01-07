//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int n = arr.size();
        int cnt = 0;
        
        for(int i = 0; i < n-1; i++){
            int bound = target - arr[i];
            
            auto low = lower_bound(arr.begin() + i + 1, arr.end(), bound);
            auto high = upper_bound(arr.begin() + i + 1, arr.end(), bound);
            
            cnt += (high - low);
        }
        
        return cnt;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int target;
        string input;
        getline(cin, input);

        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        cin >> target;
        cin.ignore();
        Solution obj;
        cout << obj.countPairs(arr, target) << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends