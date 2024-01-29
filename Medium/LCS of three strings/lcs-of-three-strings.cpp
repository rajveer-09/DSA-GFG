//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:

         int LCSof3(string x, string y, string z, int n1, int n2, int n3) {
        int** mata = (int**)calloc(n2 + 1, sizeof(int*));
        int** matb = (int**)calloc(n2 + 1, sizeof(int*));
 
        for (int i = 0; i <= n2; i++) {
            mata[i] = (int*)calloc(n3 + 1, sizeof(int));
            matb[i] = (int*)calloc(n3 + 1, sizeof(int));
        }
        for (int i = 1; i <= n1; i++) {
            for (int j = 1; j <= n2; j++) {
                for (int k = 1; k <= n3; k++) {
                    if (i % 2) {
                       if (x[i - 1] == y[j - 1] && y[j - 1] == z[k - 1]) {
mata[j][k] = 1 + matb[j - 1][k - 1];
}
else {
mata[j][k] = max(mata[j][k - 1], max(mata[j - 1][k], matb[j][k]));
}
}
else {
if (x[i - 1] == y[j - 1] && y[j - 1] == z[k - 1]) {
matb[j][k] = 1 + mata[j - 1][k - 1];
}
else {
matb[j][k] = max(matb[j][k - 1], max(matb[j - 1][k], mata[j][k]));
}
}
}
}
}
        
        int res=max(mata[n2][n3], matb[n2][n3]);
        for (int i = 0; i <= n2; i++) {
            free(mata[i]);
            free(matb[i]);
        }
        free(mata);
        free(matb);
        return res;
        }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; cin >> n1 >> n2 >> n3;
        string A, B, C; cin >> A >> B >> C;
        Solution obj;
        cout << obj.LCSof3 (A, B, C, n1, n2, n3) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends