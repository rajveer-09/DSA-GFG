//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int Count(int l, int r){
		    // Code here
		  vector<bool> isprime(r+1,true);
		  int prime=0;
		 
		  for(int i=2;i<=r;i++){
		      if(isprime[i]){
		          if(i>=l) prime++;
		          for(int j=i+i;j<=r;j=j+i)
		            isprime[j]=false;
		      }
		  }
		  int ran;
		  if(l==1) ran = r-l;
		  else ran = r-l+1;
		  int comp=ran-prime;
		  return comp-prime;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int L, R;
		cin >> L >> R;
		Solution obj;
		int ans = obj.Count(L, R);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends