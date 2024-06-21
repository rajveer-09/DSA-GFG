//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int bit(int n) {
    int prev = 1;
    if (n == 0) return 1;
    if (n == 1) return prev+1;
    int curr;
    for (int i = 1; i < n; i++) {
        curr = (1 << i) + 2*prev; 
        prev = curr;
    }
    return prev+1;
}

int countSetBits(int n) {
    int ans = 0;
    int cnt=0;
    for (int i = 31; i >=0; i--) {
        if (n & (1 << i)) {
            ans += bit(i);
            ans+=(1<<i)*cnt;
            cnt++;
        }
    }
    return ans;
}
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends