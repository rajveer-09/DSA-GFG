//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(long long arr[], int n) {
        // code here
     unordered_map<int,int> freq;
        vector<int>duplicate;
        
        for(int i = 0; i<n; i++)
        {
            freq[arr[i]]++;
        }
        for(auto x : freq)
        {
            if(x.second > 1)
            {
                duplicate.push_back(x.first);
            }
        }
        if(duplicate.empty() == true)
        {
            duplicate.push_back(-1);
        }
        sort(duplicate.begin(), duplicate.end());
        return duplicate;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends