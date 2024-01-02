//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool workSum(long long num, long long diff)
    {
        long long sum = 0;
        long long temp = num;
        while(temp > 0)
        {
            sum = sum+(temp%10);
            temp /= 10;
        }
        if(num-sum >= diff)
            return true;
        return false;
    }
    long long getCount(long long N , long long D) {
        long long start = 0;
        long long end = N;
        while(start <= end)
        {
            long long int mid = start + (end-start)/2;
            if(workSum(mid,D) == true)
                end = mid - 1;
            else
                start = mid + 1;
        }
        return N-start+1;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N,D;

        cin>>N>>D;

        Solution ob;
        cout << ob.getCount(N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends