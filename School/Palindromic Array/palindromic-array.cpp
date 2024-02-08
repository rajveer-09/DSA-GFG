//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
bool isPalindrom(int num){
    int p=num;
    int rev=0;
    while(p!=0){
        rev=rev*10+p%10;
        p/=10;
    }
    return rev==num;
    
}
    int PalinArray(int arr[], int n)
    {
    	// code here
    	for(int i=0;i<n;i++){
    	    if(!isPalindrom(arr[i])) return 0;
    	}
    	return 1;
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
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends