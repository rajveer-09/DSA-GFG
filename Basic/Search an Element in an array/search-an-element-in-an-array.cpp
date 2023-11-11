//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        
        // Your code here
         for (int i = 0; i < N; i++)
        {
            if (arr[i] == X)
            {
                return i;  // Return the index of the element found, not the element itself
            }
        }
        return -1;  // Return -1 if the element is not found in the array
    }

};

//{ Driver Code Starts.

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        int x;
        
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        cin>>x;
        Solution ob;
        cout<<ob.search(arr,sizeOfArray,x)<<endl; //Linear search
    }

    return 0;
    
}

// } Driver Code Ends