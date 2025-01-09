//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
         int sum=0;
       
       unordered_map<int,int>mp;
       vector<int>ans;
       
       for(int i=0;i<arr.size();i++){
           sum+=arr[i];
           
           if(sum==target){
              ans.push_back(1);
              ans.push_back(i+1);
              return ans;
           }else if(mp.find(sum-target)!=mp.end()){
               ans.push_back(mp[sum-target]+2);
               ans.push_back(i+1);
               return ans;
           }
           mp[sum]=i;
       }
       return {-1};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int d;
        string input;

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        cin >> d;
        cin.ignore();

        Solution ob;
        vector<int> result = ob.subarraySum(arr, d);
        for (int i : result) {
            cout << i << " ";
        }
        cout << "\n~\n";
    }
    return 0;
}

// } Driver Code Ends