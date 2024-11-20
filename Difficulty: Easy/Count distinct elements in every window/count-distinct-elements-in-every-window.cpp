//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        unordered_map<int, int> mp;
        int st = 0;
        vector<int> ans;

        for (int ed = 0; ed < arr.size(); ed++) {
            mp[arr[ed]]++;

            if (ed - st + 1 == k) {
                ans.push_back(mp.size());

                mp[arr[st]]--;
                if (mp[arr[st]] == 0) {
                    mp.erase(arr[st]);
                }
                st++;
            }
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
        vector<int> res = obj.countDistinct(arr, k);
        for (auto it : res)
            cout << it << " ";
        cout << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends