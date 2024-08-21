//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        // code here
        int ans = 0;
        
        for(int i = 0; i < n; i++){
            ans^= arr[i]^(i+1);
        }
        
        int tmp=0;
        
        int a=0,b=0;
        
        for(int i=0;i<31;i++){
            if(1<<i & ans){
                tmp=1<<i;
                break;
            }
        }
        
        int x = 1;
        
        for(int i=0;i<n;i++){
            if(tmp&arr[i]){
                a ^= arr[i];
            }
            else{
                b ^= arr[i];
            }
            
            if(x&tmp){
                 a ^= x;
                 x++;
            }
            else{
                b ^= x;
                x++;
            }
        }
        
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==a) cnt++;
        }
        
        if(cnt==2){
            return {a,b};
        }
        else return {b,a};
        
        return {};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends