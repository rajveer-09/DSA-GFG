//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) {
        // code here
        int i=0;
        int j = arr.size()-1;
        int mini1=arr[0];
        int mini2=arr[arr.size()-1];
        int diff = INT_MAX;
        vector<int>ans(2);
        
         if(arr.size()<2) {
                return {};
            }
        sort(arr.begin() , arr.end());
        while(i<j){
            int currSum = arr[i]+arr[j];
            int currDiff = abs(target - currSum);
            
            if(currDiff<diff){
                diff = currDiff;
                ans[0]  = arr[i];
                ans[1] = arr[j];
            }
             if(currSum <= target) {
                i++;
            }
            
            else{
                j--;
            }
        }
        
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int target = stoi(ks);
        Solution ob;
        vector<int> ans = ob.sumClosest(arr, target);
        if (ans.empty()) {
            cout << "[]";
        } else {
            for (auto it : ans) {
                cout << it << " ";
            }
        }
        cout << endl;
        cout << "~\n";
    }

    return 0;
}
// } Driver Code Ends