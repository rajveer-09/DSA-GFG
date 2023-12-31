//{ Driver Code Starts
#include<iostream>
#include<stdio.h>
using namespace std; 
void multiply(int A[][100], int B[][100], int C[][100], int N);
int main()
{
	int t;
	cin>>t;
	while(t--){
	    int N;
		cin>>N;
		int A[100][100],B[100][100],C[100][100];
		int i, j;
		for(int i = 0; i < N; i++)
		    for(int j = 0 ; j < N; j++)
		        cin>>A[i][j];
		for(int i = 0; i < N; i++)
		    for(int j = 0; j < N; j++)
		        cin>>B[i][j];
		multiply(A, B, C, N);
		for (i = 0; i < N; i++)
		{
			for (j = 0; j < N; j++)
			   cout<<C[i][j]<<" ";
		}
		cout<<endl;
	}
 
    return 0;
}
// } Driver Code Ends


/*Complete the function below*/
const int S{ 100 };
void multiply( int a[][ S ], int b[][ S ], int c[][ S ], int n ) {
    fill( **&c, *&c[ n ], 0 );
    for ( int i{}; i < n; ++i )
        for ( int j{}; j < n; ++j )
            for ( int k{}; k < n; ++k )
                c[ i ][ j ] += a[ i ][ k ] * b[ k ][ j ];
} // T: 0.01
