//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	   vector<int>ans;
       set<int>st;
       for(int div=2;div*div<=N;div++){
           while(N%div==0){
               st.insert(div);
               N=N/div;
           }
       }
       if(N>1)
       st.insert(N);
       
        for(auto x:st){
            ans.push_back(x);
        }
       
       return ans;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends