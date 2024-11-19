//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        // write code here
        vector<int> ans;
        priority_queue<int, vector<int>, greater<int>> q;
        
        int st = 0;
        
        for(int ed = 0; ed < arr.size(); ed++){
            if(arr[ed] < 0) q.push(ed);
            
            if((ed - st + 1) == k){
                if(!q.empty()){
                    int t = q.top();
                    if(t == st) q.pop();
                    ans.push_back(arr[t]);
                }
                else{
                    ans.push_back(0);
                }
                st++;
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
        int k = stoi(ks);
        Solution ob;
        vector<int> ans = ob.FirstNegativeInteger(arr, k);
        for (auto it : ans) {
            cout << it << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends