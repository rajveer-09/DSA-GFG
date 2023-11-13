//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void visitedLeaves(vector<bool> &visited, int n, int l)
    {
        int i = 1;
        while(n*i <= l)
        {
            visited[n*i] = true;
            i++;
        }
    }
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        vector<bool> visited(leaves + 1, false);
        for(int i=0;i<N;i++)
        {
            if(frogs[i] == 1)
            {
                return 0;
            }
            if(visited[frogs[i]] == false)
            {
                visitedLeaves(visited, frogs[i], leaves);
            }
        }
        int count = 0;
        for(int i=1;i<=leaves;i++)
        {
            if(visited[i] == false)
            {
                count++;
            }
        }
        return count;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends