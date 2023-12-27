//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    string longest(string names[], int n)
    {
        int max = 0;
        // Iterate through the array starting from index 1
        for (int j = 1; j < n; j++) {
            // If the length of the current name is greater than the length of
            // the name at index 'max', update 'max' to the current index
            if (names[j].length() > names[max].length()) {
                max = j;
            }
        }
        // Return the longest name in the array
        return names[max];
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string names[n];
		
		for(int i=0;i<n;i++)
			cin>>names[i];
		Solution ob;
		cout<< ob.longest(names, n) << endl;
	}
}

// } Driver Code Ends