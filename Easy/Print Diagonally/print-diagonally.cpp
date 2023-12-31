//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;
        int i,h,l;
        for(i=0;i<N;i++){
            h = i,l = 0;
            while(h>=0 && l<=i){
                ans.push_back(A[l][h]);
                h--;
                l++;
            }
        }
        
        for(i=1;i<N;i++){
            l=i,h=N-1;
            while(l<N && h>0){
                ans.push_back(A[l][h]);
                h--;
                l++;
            }
        }
        
        return ans;
		
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDiagonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends