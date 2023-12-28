//{ Driver Code Starts
// C++ program to calculate sum of all numbers present
// in a string containing alphanumeric characters
#include <iostream>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to calculate sum of all numbers present in a string.
    int findSum(string str)
    {
    	
    	// Your code here
    	 int n=str.size();
        int s=0;
        string g;
        for(int i=0; i<n; i++)
        {
            if(!isdigit(str[i]) && g.size()!=0)
            {
                s=s+stoi(g);
                g.clear();
            }
            if(isdigit(str[i]))
            {
                g=g+str[i];
            }
        }
        if(isdigit(str[n-1]))
           s=s+stoi(g);
        return s;
    	
    }
};

//{ Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}

// } Driver Code Ends