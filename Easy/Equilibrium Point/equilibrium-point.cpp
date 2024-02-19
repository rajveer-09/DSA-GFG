//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
         if (n == 1) return 1;

    int low = 0;
    int high = n - 1;
    long long sum1 = 0;
    long long sum2 = 0;

    while (low <= high) {
        if (sum1 < sum2) {
            sum1 += a[low];
            low++;
        } else if (sum1 > sum2) {
            sum2 += a[high];
            high--;
        } else {
            if (low == high) {
                return low + 1; 
            }
            sum1 += a[low];
            sum2 += a[high];
            low++;
            high--;
        }
    }

    return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends