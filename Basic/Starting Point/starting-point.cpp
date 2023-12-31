//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
public:
	vector<int> findStartingPoint(int x, int y, vector<vector<int>>pathCoordinates){
	    // Code here
	    for(int i=pathCoordinates.size()-1; i>=0; i--) {
	    x -= pathCoordinates[i][0];
	    y -= pathCoordinates[i][1];
	}
	return {x,y};
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int x, y;
		cin >> x >> y;
		int n;
		cin >> n;
		vector<vector<int>>pathCoordinates;
		for(int i = 0; i < n; i++){
			int a, b;
			cin >> a >> b;
			pathCoordinates.push_back({a,b});
		}
		Solution obj;
		vector<int> ans = obj.findStartingPoint(x, y, pathCoordinates);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends