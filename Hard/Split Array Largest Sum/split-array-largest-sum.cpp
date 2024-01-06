//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPossible(int arr[], int n, int m, int mid) {
    int sum = 0;
    int subCnt = 1;  // Initialize subCnt to 1 since you are starting a new subarray

    for (int i = 0; i < n; i++) {
        if (sum + arr[i] <= mid) {
            sum += arr[i];
        } else {
            subCnt++;
            if (subCnt > m || arr[i] > mid) {
                return false;
            }
            sum = arr[i];
        }

        if (subCnt > m) {
            return false;
        }
    }

    return true;
}

int splitArray(int arr[], int n, int K) {
    int s = 0;
    int maxi = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }
    s = maxi;

    int e = 0;
    int sum = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    e = sum;

    int ans = 0;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (isPossible(arr, n, K, mid)) {
            ans = mid;
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends