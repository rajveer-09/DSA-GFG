//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    vector<string> genIp(string &s) {
        // Your code here
         vector<string> ans;
        int N = s.length();

        for(int i=0; i<N-3; ++i){
            for(int j=i+1; j<N-2; ++j){
                for(int k=j+1; k<N-1; ++k){

                    string A = s.substr(0, i+1);
                    string B = s.substr(i+1, j-i);
                    string C = s.substr(j+1, k-j);
                    string D = s.substr(k+1, N-k);

                    int p = A.length();
                    int q = B.length();
                    int r = C.length();
                    int t = D.length();

                    if((A[0] == '0' && p > 1) || (B[0] == '0' && q > 1) || (C[0] == '0' && r > 1) || (D[0] == '0' && t > 1)) continue;
                    if((A[0] != '0' && p > 3) || (B[0] != '0' && q > 3) || (C[0] != '0' && r > 3) || (D[0] != '0' && t > 3)) continue;
                    if(p <= 0 || q <= 0 || r <= 0 || t <= 0) continue;
                    if(stoi(A) > 255 || stoi(B) > 255 || stoi(C) > 255 || stoi(D) > 255) continue;

                    string ip = A + '.' + B + '.' + C + '.' + D;
                    ans.push_back(ip);
                }
            }
        }
        return ans;
    }

};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        /*generating naively*/
        Solution obj;
        vector<string> str = obj.genIp(s);
        sort(str.begin(), str.end());
        if(str.size()==0)
            cout << -1 << "\n";
        else{
            for (auto &u : str) {
                cout << u << "\n";
            }
        }
    }
}
// } Driver Code Ends