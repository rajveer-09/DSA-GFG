//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
        //code here
        for(int i=0;i<r;i++){
            string temp="";
            for(int j=0;j<s.length();j++){
                if(s[j]=='0'){
                    temp.push_back('0');
                    temp.push_back('1');
                }else{
                    temp.push_back('1');
                    temp.push_back('0');
                }
            }
            s=temp.substr(0,s.length());
        }
        return s[n];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
// } Driver Code Ends