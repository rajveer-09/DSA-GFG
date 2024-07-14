//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
public:
    int countSpecialNumbers(int n, vector<int> arr) {
        unordered_map<int, int> mp;
        
        for (int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        int cnt = 0;
        
        for (int i = 0; i < n; i++) {
            int num = arr[i];
            
            if (mp[num] > 1) {
                cnt++;
                continue;
            }
            
            for (int j = 1; j * j <= num; j++) {

                if (num % j == 0 && num!=1) {
                    if (mp.count(j) > 0) {
                        cnt++;
                        break;
                    }
                    if (j != num / j && j!=1 && mp.count(num / j) > 0) {
                        cnt++;
                        break;
                    }
                    
                }
                
            }
        }
        
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends