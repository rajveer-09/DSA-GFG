//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int totalCount(int k, vector<int>& arr) {
        // code here
        vector<int>v;
        for(int i=0;i<arr.size();i++){
        int count=0,rem=0,sum=0,remcount=0;
            count=arr[i]/k;
            rem=arr[i]%k;
            if(rem!=0){
                remcount++;
            }
            sum=count+remcount;
            v.push_back(sum);
        }
        int total=0;
        for(int j=0;j<v.size();j++){
            total=total+v[j];
        }return total;
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.totalCount(k, arr);
        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends