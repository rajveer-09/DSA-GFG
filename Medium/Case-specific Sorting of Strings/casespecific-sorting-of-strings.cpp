//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string lC;
        string uC;
        for(int i=0;i<str.size();i++){
            if(str[i]>='a'&&str[i]<='z') lC.push_back(str[i]);
            if(str[i]>='A'&&str[i]<='Z') uC.push_back(str[i]);
        }
        sort(lC.begin(),lC.end());
        sort(uC.begin(),uC.end());
        int j=0;
        int k=0;
        for(int i=0;i<str.size();i++){
            if(str[i]>='a'&&str[i]<='z') str[i]=lC[j++];
            if(str[i]>='A'&&str[i]<='Z') str[i]=uC[k++];
        }
        return str;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends