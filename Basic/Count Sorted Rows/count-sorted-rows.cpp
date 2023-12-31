//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int sortedCount(int N, int M, vector<vector<int>> Mat) {
        // code here
         if(M==1){
            return N;
        }
       
        int cnt=0;
        for(int i=0;i<N;i++){
             int c=0;
             int t=0;
            for(int j=0;j<M-1;j++){
                if(Mat[i][j]<Mat[i][j+1]){
                    c++;
                }
                else if(Mat[i][j]>Mat[i][j+1])
                     t++;
            }
            if(c==M-1 ||t==M-1)cnt++;
           
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        cout << ob.sortedCount(N, M, Mat) << "\n";
    }
}
// } Driver Code Ends