//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void evenOdd(int a, int b){
        // Code here
         if(a%2 == 0){
            cout<<a<<endl;
            cout<<b<<endl;
            }
        else {
            cout<<b<<endl;
            cout<<a<<endl;
        }
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--){
        int a, b;
        cin >> a >> b;
        Solution obj;
        obj.evenOdd(a, b);
    }
    return 0;
}
// } Driver Code Ends