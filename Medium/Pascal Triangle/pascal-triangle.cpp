//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// #define ll long long
#define mod 1000000007

class Solution {
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<long long> row(n);
        row[0] = 1;

        // Each element in Pascal's Triangle can be derived from the previous row.
        for (int i = 1; i < n; ++i) {
            row[i] = (row[i - 1] * (n - i)) % mod;
            row[i] = (row[i] * modInverse(i, mod)) % mod;
        }

        return row;
    }

private:
    long long modInverse(long long a, long long m) {
        return power(a, m - 2, m);
    }

    long long power(long long x, long long y, long long m) {
        if (y == 0)
            return 1;
        long long p = power(x, y / 2, m) % m;
        p = (p * p) % m;
        return (y % 2 == 0) ? p : (x * p) % m;
    }
};


//{ Driver Code Starts.


void printAns(vector<long long> &ans) {
    for (auto &x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.nthRowOfPascalTriangle(n);
        printAns(ans);
    }
    return 0;
}

// } Driver Code Ends