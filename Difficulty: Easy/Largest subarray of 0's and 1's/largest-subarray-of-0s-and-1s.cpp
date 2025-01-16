//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxLen(vector<int> &arr) {
        // Your code here
        unordered_map<int,int>mp;
        int sum=0;
        int maxlen=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)sum+=-1;
            else sum+=1;
            
            if(sum==0){
                maxlen=i+1;
            }
            
            if(mp.find(sum)!=mp.end()){
                maxlen=max(maxlen,i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
            
        }
        return maxlen;
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore(); // To ignore the newline character after reading T

    while (T--) {
        string line;
        getline(cin, line); // Read the whole line for the array

        // Convert the line into an array of integers
        stringstream ss(line);
        vector<int> a;
        int num;
        while (ss >> num) {
            a.push_back(num);
        }

        // Create the solution object
        Solution obj;

        // Call the maxLen function and print the result
        cout << obj.maxLen(a) << endl;
    }

    return 0;
}
// } Driver Code Ends