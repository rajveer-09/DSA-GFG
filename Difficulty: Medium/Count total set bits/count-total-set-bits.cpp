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
int countSetBits(int n) {
    int count = 0;
    int powerOfTwo = 1;

    while (powerOfTwo <= n) {
        // Calculate number of complete sets of powerOfTwo * 2
        int totalPairs = n + 1;
        int completePairs = totalPairs / (powerOfTwo * 2);
        
        // Each pair contributes powerOfTwo set bits
        count += completePairs * powerOfTwo;

        // Calculate remainder pairs that contribute additional set bits
        int remainder = totalPairs % (powerOfTwo * 2);
        if (remainder > powerOfTwo) {
            count += remainder - powerOfTwo;
        }

        powerOfTwo <<= 1; // Move to the next power of two
    }

    return count;
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