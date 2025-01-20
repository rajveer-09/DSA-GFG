//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
private:
    int numberOfGasStationsRequired(long double dist, vector<int> &arr) {
        int n = arr.size(); 
        int cnt = 0;
        for (int i = 1; i < n; i++) {
            int numberInBetween = ((arr[i] - arr[i - 1]) / dist);
            if ((arr[i] - arr[i - 1]) == (dist * numberInBetween)) {
                numberInBetween--;
            }
            cnt += numberInBetween;
        }
        return cnt;
    }
public:
    long double findSmallestMaxDist(vector<int> &arr, int k) {
        int n = arr.size(); 
        long double low = 0;
        long double high = 0;

        for (int i = 0; i < n - 1; i++) {
            high = max(high, (long double)(arr[i + 1] - arr[i]));
        }

        long double diff = 1e-6;
        while (high - low > diff) {
            long double mid = (low + high) / 2.0;
            int cnt = numberOfGasStationsRequired(mid, arr);

            if (cnt > k) {
                low = mid;
            } else {
                high = mid;
            }
        }

        return high;
    }
};



//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> stations(n);
        for (int i = 0; i < n; i++) {
            cin >> stations[i];
        }
        int k;
        cin >> k;
        Solution obj;
        cout << fixed << setprecision(2) << obj.findSmallestMaxDist(stations, k)
             << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends