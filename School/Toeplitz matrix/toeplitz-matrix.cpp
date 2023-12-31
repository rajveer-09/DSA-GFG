//{ Driver Code Starts
#include <iostream>
using namespace std;
#define MAX 1000 

bool isToepliz(int A[MAX][MAX],int N,int M);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[MAX][MAX];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
				cin>>a[i][j];
		}

		cout<<isToepliz(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete this method*/
bool isToepliz(int A[MAX][MAX],int N,int M)
{
//Your code here
  if(N==1 || M==1)
          {
              return 1;
          }
           for(int i=0;i<N-1;i++)
           {
               
               for(int j=0;j<M-1;j++)
               {
                   if(A[i][j]!=A[i+1][j+1])
                   return 0;
               }

           }
           return 1;
}