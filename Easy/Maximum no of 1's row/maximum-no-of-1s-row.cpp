//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        int maxOnes (vector <vector <int>> &matrix, int n, int m)
        {
            // your code here
     int cnt_max = 0;
     int index = -1;
     for (int i = 0; i < n; i++){
        int cnt_ones = m - (lower_bound(matrix[i].begin(),matrix[i].end(), 1)-matrix[i].begin());
       if (cnt_ones > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
        }
};

//{ Driver Code Starts.

int main(){
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        Solution ob;        
        cout << ob.maxOnes(arr, n, m) << endl;
    }
}
// } Driver Code Ends