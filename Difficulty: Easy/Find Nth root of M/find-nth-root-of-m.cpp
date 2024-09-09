//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int nth(int x, int n, int m) {
        long long ans = 1;
        
        for (int i = 0; i < n; i++) {
            ans *= x;
            if (ans > m) return 2;
        }
        
        if (ans == m) return 1;
        
        return 0;
    }

    int NthRoot(int n, int m) {
        int i = 1, j = m;
        
        while (i <= j) {  
            int mid = i + (j - i) / 2;
            
            int result = nth(mid, n, m);
            
            if (result == 1) return mid;  
            
            else if (result == 0) i = mid + 1;
            
            else j = mid - 1;  
        }
        
        return -1;  
    }
};



//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends