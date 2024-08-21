//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
  public:
int maxLen(vector<int> &arr, int n)
{
    // Your code here

    map<long long, int> mp;

    int ans = 0;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum == 0)
            ans = i + 1;

        long long target = sum;

        if (mp.count(target))
        {
            ans = max(ans, i - mp[target]);
        }

        if (!mp.count(sum))
            mp[sum] = i;
    }

    return ans;
}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends