//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void add_to_vector(vector<int> &A,int x);


void sort_vector_asc(vector<int> &A);


void reverse_vector(vector<int> &A);

int size_of_vector(vector<int> &A);

void sort_vector_desc(vector<int> &A);

void print_vector(vector<int> &A);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		vector<int> A;
		int q;
		cin>>q;
		while(q--)
		{
			char c;
			cin>>c;
			if(c=='a')
			{
				int x;
				cin>>x;
				add_to_vector(A,x);
			}
			if(c=='b')
			{
				sort_vector_asc(A);
			}
			if(c=='c')
			{
				reverse_vector(A);
			}
			if(c=='d')
			{
				cout<<size_of_vector(A)<<" ";
			}
			if(c=='e')
			{
				print_vector(A);
				
			}
			if(c=='f')
			{
				sort_vector_desc(A);
			}
			
		}
cout<<endl;
	}
	return 0;
}
// } Driver Code Ends


/*You are required to complete below methods*/

/*inserts an element x at 
the back of the vector A */
void add_to_vector( vector< int >& a, int x ) {
    a.push_back( x );
}
void sort_vector_asc( vector< int >& a ) {
    sort( a.begin(), a.end() );
}
void reverse_vector( vector< int >& a ) {
    reverse( a.begin(), a.end() );
}
int size_of_vector( vector< int >& a ) {
    return a.size();
}
void sort_vector_desc( vector< int >& a ) {
    sort( a.rbegin(), a.rend() );
}
void print_vector( vector< int >& a ) {
    for ( const int i : a ) cout << i << ' ';
}
