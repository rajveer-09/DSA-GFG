//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        vector<int>small(n);
        vector<int>large(n);
        stack<int>st1;
        st1.push(0);
        stack<int>st2;
        for(int i=0;i<n;i++){
            while(!st1.empty() && st1.top()>=arr[i]){
                st1.pop();
            }
            small[i]=st1.top();
            st1.push(arr[i]);
        }
        st2.push(0);
        for(int i=n-1;i>=0;i--){
            while(!st2.empty() && st2.top()>=arr[i]) {
                st2.pop();
            }
            large[i]=st2.top();
            st2.push(arr[i]);
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            int diff=abs(large[i]-small[i]);
            ans=max(diff,ans);
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
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends