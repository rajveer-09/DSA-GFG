//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // code here
         vector<pair<int, int>> diff(n);
        for (int i = 0; i < n; ++i) {
            diff[i] = {abs(arr[i] - brr[i]), i};
        }
        // Sorted
        sort(diff.rbegin(), diff.rend());
        
        long long totalTips = 0;
        int countA = 0, countB = 0;
        
        for (int i = 0; i < n; ++i) {
            int idx = diff[i].second;
            if (arr[idx] >= brr[idx]) {
                if (countA < x) {
                    totalTips += arr[idx];
                    countA++;
                } else {
                    totalTips += brr[idx];
                    countB++;
                }
            } else {
                if (countB < y) {
                    totalTips += brr[idx];
                    countB++;
                } else {
                    totalTips += arr[idx];
                    countA++;
                }
            }
        }
        
        return totalTips;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends