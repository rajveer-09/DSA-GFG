//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> prev(vector<int> height)
    {
        int n = height.size();
        stack<int> s;
        vector<int> ans(n);
        s.push(0);
        ans[0] = -1;
        for(int i = 1; i < n; i++)
        {
            while(!s.empty() && height[i] <= height[s.top()])
            {
                s.pop();
            }
            if(s.empty())
            {
                ans[i] = -1;
            }
            else
            {
                ans[i] = s.top();
            }
            s.push(i);
        }
        return ans;
    }
    vector<int> next(vector<int> height)
    {
        int n = height.size();
        stack<int> s;
        vector<int> ans(n);
        s.push(n-1);
        ans[n-1] = n;
        for(int i = n-2; i >= 0; i--)
        {
            while(!s.empty() && height[i] <= height[s.top()])
            {
                s.pop();
            }
            if(s.empty())
            {
                 ans[i] = n;
            }
            else
            {
                ans[i] = s.top();
            }
            s.push(i);
        }
        return ans;
    }
    int maxSquare(int n, int m, vector<vector<int>> mat) {
        // int n,m;
        // cin >> n >> m;
        // vvll mat(n,vll(m));
        // in2(mat);
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(mat[i][j] == 1)
                {
                    mat[i][j] += (i-1 >= 0 ? mat[i-1][j] : 0);
                }
            }
        }
        // debug(mat)
        for(int i = 0; i < n; i++)
        {
            vector<int> height = mat[i];
            vector<int> prev_smaller = prev(height);
            vector<int> next_smaller = next(height);
            for(int j = 0; j < m; j++)
            {
                int width = next_smaller[j] - prev_smaller[j] - 1;
                if(width >= height[j])
                {
                    ans = max(ans,height[j]);
                }
            }
        }
        // cout << ans << endl;
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for (int i = 0; i < n * m; i++)
            cin >> mat[i / m][i % m];

        Solution ob;
        cout << ob.maxSquare(n, m, mat) << "\n";
    }
    return 0;
}
// } Driver Code Ends