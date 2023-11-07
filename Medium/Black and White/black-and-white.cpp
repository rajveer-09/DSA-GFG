//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int n, int m)
{
    // write code here
    long long mod=1e9+7;

    vector<int>dx={-1,-2,2,1,1,2,-2,-1};

    vector<int>dy={2,1,1,2,-2,-1,-1,-2};

 

     long long ans=0;

    for(int i=0;i<n;i++){

        for(int j=0;j<m;j++){

            long long store=0;

            for(int k=0;k<8;k++){

                 int r=i+dx[k];

                 int c=j+dy[k];

                 if(r<n and c<m and r>=0 and c>=0){

                     

                     store++;

                 }

            }

          ans+=((n*m)-store-1);

          ans%=mod;

            

          

            

        }

    }

  

   

   

    return ans;
}