//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    int check(int n, int x, int y, int z, vector<int>& ans) {
    if (n == 0)
        return 0;
    if (n < 0)
        return INT_MIN; // Use INT_MIN to indicate an invalid cut
    if (ans[n] != -1)
        return ans[n];
    
    int a = check(n - x, x, y, z, ans);
    int b = check(n - y, x, y, z, ans);
    int c = check(n - z, x, y, z, ans);
    
    if (a != INT_MIN) a += 1;
    if (b != INT_MIN) b += 1;
    if (c != INT_MIN) c += 1;
    
    ans[n] = std::max({a, b, c});
    return ans[n];
}

int maximizeTheCuts(int n, int x, int y, int z) {
    vector<int> ans(n + 1, -1);
    int result = check(n, x, y, z, ans);
    return result < 0 ? 0 : result; // If result is negative, return 0
}
};

//{ Driver Code Starts.
int main() {
    
    //taking testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking length of line segment
        int n;
        cin >> n;
        
        //taking types of segments
        int x,y,z;
        cin>>x>>y>>z;
        Solution obj;
        //calling function maximizeTheCuts()
        cout<<obj.maximizeTheCuts(n,x,y,z)<<endl;

    }

	return 0;
}
// } Driver Code Ends