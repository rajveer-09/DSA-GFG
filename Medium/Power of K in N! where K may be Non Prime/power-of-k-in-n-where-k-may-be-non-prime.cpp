//{ Driver Code Starts


// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    bool isPrime(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void factors(int k, std::vector<int>& list) {
    for (int i = 2; i <= k; i++) {
        if (k % i == 0 && isPrime(i)) {
            list.push_back(i);
        }
    }
}

int largestPowerOfK(int N, int K) {
    std::vector<int> factorsOfK;
    factors(K, factorsOfK);

    int n = factorsOfK.size();
    std::vector<int> countOfFactors(n, 0);

    // This loop will count the number of occurrences of the corresponding
    // prime factors in N!

    for (int i = 0; i < n; i++) {
        int factor = factorsOfK[i];
        int count = 0;

        for (int j = factor; j <= N; j += factor) {
            int num = j;
            while (num >= factor && num % factor == 0) {
                num /= factor;
                count++;
            }
        }

        countOfFactors[i] = count;
    }

    // This loop will count the min frequency of prime factors required
    // to form K. Ex - for K = 6, Prime factors are 2 and 3, and their
    // frequencies are 1 and 1 respectively.

    std::vector<int> minCountReq(n, 0);

    for (int i = 0; i < n; i++) {
        int factor = factorsOfK[i];
        int count = 0, num = K;

        while (num >= factor && num % factor == 0) {
            num /= factor;
            count++;
        }

        minCountReq[i] = count;
    }

    // Counts the max number of times K will occur in N! with the
    // help of their primes factors

    int ans = INT_MAX;

    for (int i = 0; i < n; i++) {
        int totalCount = countOfFactors[i];
        int requiredCount = minCountReq[i];

        ans = std::min(ans, totalCount / requiredCount);
    }

    return (ans == INT_MAX) ? 0 : ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        Solution ob;
        cout<<ob.largestPowerOfK(N,K)<<endl;
    }
    return 0;
}

// } Driver Code Ends