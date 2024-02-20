//{ Driver Code Starts
#include <iostream>
using namespace std;
#define ll long long

ll findMaxProduct(int A[], int n, int k);

int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int k;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
	
		cout<<findMaxProduct(a,n,k)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/*You are required to complete the function*/

long long findMaxProduct(int A[], int n, int k)
{
    //Your code here
    long long int prod=1;
    long long int max=1;
    for(int i=0;i<k;i++){
        prod*=A[i];
    }
    max=prod;
    for(int i=k;i<n;i++){
        prod=prod*A[i]/A[i-k];
        if(prod>max)
            max=prod;
    }
    return max;
}

