//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
        sort(arr.begin(),arr.end(),[&](auto a,auto b){
            return a.length()<b.length();
        });
        int len=arr[0].size();
        string ans= arr[0];
        for(int i=1;i<arr.size();i++){
            for(int j=0;j<len;j++){
                if(arr[i][j]!=ans[j]){
                    len=j;
                }
            }
        }
        return len==0? "-1" :ans.substr(0,len);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends